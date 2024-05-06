#include <stdio.h>
#include <conio.h>
#include <string.h>

/* EXEMPLO */
/*struct registroHoras {
    int horas;
    int minutos;
    int segundos;
    };
void espera(){
    int t;

    for (t = 1; t < 128000; ++t);
    }
    void atualiza (struct registroHoras *t)
    {
    t->segundos++;
    if (t->segundos == 60)
    {
    t->segundos = 0;
    t->minutos++;
    }
    if (t->minutos == 60)
    {
    t->minutos = 0;
    t->horas++;
    }
    if (t->horas == 24)
    t->horas = 0;
    espera();
    }
    void exibe(struct registroHoras *t)
    {
    printf ("%d:", t->horas);
    printf ("%d:", t->minutos);
    printf ("%d\n", t->segundos);
    }
    int main(void){
    struct registroHoras tempo;
    tempo.horas = 0;
    tempo.minutos = 0;
    tempo.segundos = 0;
    for ( ; !kbhit(); ) /* kbhit abreviação de keyboard hit, é uma função do C que fica
    aguardando uma tecla ser pressionada para encerrar a execução*/
    /*{ 
    atualiza (&tempo);
    exibe (&tempo);
    }
    return (0);
    }*/

    /*Ex 1*/

typedef struct{
    char nome[80];
    char situacao[20];
    float saldo;
}conta;

void recDados(conta *c){
    printf("Digite o nome do cliente:\n");
    scanf("%s", &c->nome);
    printf("Digite o saldo do cliente:\n");
    scanf("%f", &c->saldo);
}

void altSituacao(conta *c){
    if(c->saldo>=1000.0){
        strcpy(c->situacao, "PREFERENCIAL");
        c->saldo*=1.1;
    }else{
        strcpy(c->situacao, "CONVENCIONAL");
    }
}

void exibeConta(conta *c){
    printf("\nNome: %s", c->nome);
    printf("\nSituacao: %s", c->situacao);
    printf("\nSaldo: %f", c->saldo);
}

int main(){
    
    conta cliente;
    recDados(&cliente);
    altSituacao(&cliente);
    exibeConta(&cliente);
    return 0;
}




