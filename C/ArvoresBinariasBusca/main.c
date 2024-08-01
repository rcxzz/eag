#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "abb.h"

int main(){
    setlocale(LC_ALL, "portuguese");
    No* raiz=NULL;
    int op;
    int chave;

    do{
        printf("  1 - Inserir chave.\n");
        printf("  2 - Buscar chave.\n");
        printf("  3 - Remover chave.\n");
        printf("  4 - Pre-ordem.\n");
        printf("  5 - Em-ordem.\n");
        printf("  6 - Pos-ordem.\n");
        printf("  7 - Predecessor de uma chave.\n");
        printf("  8 - Sucessor de uma chave.\n");
        printf("  9 - Máximo valor na árvore.\n");
        printf("  10 - Mínimo valor na árvore.\n");
        printf("  11 - Sair.\n");
        scanf(" %d", &op);

        switch(op){
            case 1:
                printf("Digite a chave que deseja inserir: ");
                scanf("%d", &chave);
                raiz =inserir(raiz, chave);
                break;

            case 2:
                printf("Digite a chave que deseja buscar: ");
                scanf("%d", &chave);
                if(buscaChave(raiz, chave)!=NULL)
                    printf("Chave %d encontrada na árvore.\n", chave);
                else
                    printf("Chave %d nao encontrada na árvore.\n", chave);
                break;

            case 3:
                printf("Digite a chave que deseja remover: ");
                scanf("%d", &chave);
                raiz=remover(raiz, chave);
                break;

            case 4:
                printf("Pre-ordem: ");
                preOrdem(raiz);
                printf("\n");
                break;

            case 5:
                printf("Em-ordem: ");
                emOrdem(raiz);
                printf("\n");
                break;

            case 6:
                printf("Pos-ordem: ");
                posOrdem(raiz);
                printf("\n");
                break;

            case 7:
                printf("Digite a chave para encontrar o predecessor: ");
                scanf("%d", &chave);
                No* n_pred=buscaChave(raiz, chave);
                if(n_pred!=NULL){
                    No* pred=predecessor(n_pred);
                    if(pred!=NULL)
                        printf("O predecessor de %d é %d.\n", chave, pred->chave);
                    else
                        printf("%d não tem predecessor.\n", chave);
                }
                else
                    printf("Chave %d não encontrada na árvore.\n", chave);
                break;
            case 8:
                printf("Digite a chave para encontrar o sucessor: ");
                scanf("%d", &chave);
                No* n_suc=buscar_chave(raiz, chave);
                if(n_suc!=NULL){
                    No* suc=sucessor(n_suc);
                    if(suc!=NULL)
                        printf("O sucessor de %d e %d.\n", chave, suc->chave);
                    else
                        printf("%d não tem sucessor.\n", chave);
                } 
                else 
                    printf("Chave %d não encontrada na árvore.\n", chave);
                break;
            case 9:
                if(raiz!=NULL){
                    No* max=maximo(raiz);
                    printf("O máximo valor na árvore é %d.\n", max->chave);
                } 
                else{
                    printf("A árvore esta vazia.\n");
                }
                break;

            case 10:
                if(raiz!=NULL){
                    No* min=minimo(raiz);
                    printf("O mínimo valor na árvore é %d.\n", min->chave);
                } 
                else
                    printf("A árvore esta vazia.\n");
                break;

            case 11:
                printf("Saindo...\n");
                break;
            default:
                printf("ERRO, OPÇÃO INVÁLIDA.\n");
                break;
        }
    }while(op != 11);
    return 0;
}