#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Conta{
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
};

int main(){
    struct Conta vcliente[100];
    int i, j;

    printf("Digite o numero de clientes:");
    scanf("%d", &j);
    if(j<0 || j>100){
        printf("INVALIDO!");    
        return 1;
    }
    for(i=0; i<j; i++){
        printf("Cliente: %d", i+1);
        printf("\n Digite o numero da conta:");
        scanf("%d", &vcliente[i].num_conta);
        printf("\n Digite o tipo da conta:");
        fflush(stdin);
        scanf("%c", &vcliente[i].tipo_conta);
        printf("\n Digite o nome do cliente:");
        fflush(stdin);
        scanf("%s", &vcliente[i].nome);
        printf("\n Digite o saldo:");
        scanf("%f", &vcliente[i].saldo);
    }
    printf("\n Imprime os dados dos cliente:");
    printf("\n Nro Cta Tipo Cta Nome Cliente Saldo Cta");
    for(i=0;i<j;i++){
        printf("\n %3d      %c      %s      %.2f", vcliente[i].num_conta, vcliente[i].tipo_conta, vcliente[i].nome, vcliente[i].saldo);
    }
    return 0;
}