#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Lista L;
    Registro r;
    int op, chave, pos;

IniciarLista(&L);

do{
    printf("\n Digite o numero de acordo com o que deseja:");
    printf("\n 1 - Inserir no final \n 2 - Inserir no inicio \n 3 - Inserir na posicao \n 4 - Excluir elemento \n 5 - Imprimir elementos \n 6 - Sair \n");
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("\n Digite o valor que deseja inserir: ");
            scanf("%d", &r.chave);
            if(InsertFinal(&L, &r)==naodeuzika)
                printf("\n Elemento inserido no final!");
            else
                printf("\n ERRO! Lista cheia!");
            break;
        case 2:
            printf("\n Digite o valor que deseja inserir: ");
            scanf("%d", &r.chave);
            if(InsertInicio(&L, &r)==naodeuzika)
                printf("\n Elemento inserido no inicio!");
            else
                printf("\n ERRO! Lista cheia!");
            break;
        case 3:
            printf("\n Digite o valor que deseja inserir: ");
            scanf("%d", &r.chave);
            printf("\n Digite a posicao que deseja inserir: ");
            scanf("%d", &pos);
            if(InsertPos(&L, &r, pos)==naodeuzika)
                printf("\n Elemento inserido na posicao %d!", pos);
            else
                printf("\n ERRO! Posicao invalida ou lista cheia!");
            break;
        case 4:
            printf("\n Digite o valor que deseja inserir: ");
            scanf("%d", &chave);
            if(ExcluirElemento(&L, &chave)==naodeuzika)
                printf("\n Elemento excluido!");
            else
                printf("\n ERRO! Elemento nao encontrado!");
            break;
        case 5:
            ImprimirElementos(&L);
            break;
        case 6:
            printf("\n Saindo...");
            break;
        default:
            printf("\n Opcao invalida!");
    }
}while(op!=6);

return 0;
}