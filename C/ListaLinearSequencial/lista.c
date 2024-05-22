#include "lista.h"
#include <stdio.h>

void Iniciar(Lista *L){
    L->N=0;
}

void RetornarNElementos(Lista *L){
    return L->N;
}

void ImprimirElementos(Lista *L){
    int i;
    printf("\n ========== Lista ========== \n");
    if(L->N=0)
        printf("\nLISTA VAZIA!");
    else{
        for(i=0; i<L->N; ++i)
            printf(" %d", L->V[i].chave);
    }
}

void ReiniciarLista(Lista *L){
    L->N=0;
}

int BuscaElemento(Lista *L, TipoChave *ch){
    int i=0;
    while(i<L->N){
        if(ch==L->V[i].chave)
            return i;
        else
            i++;
    }
    return deuzika;
}

int InsertFinal(Lista *L, Registro *r){
    if(L->N==max)
        return deuzika;
    else{
        L->V[L->N]=*r;
        L->N++;
        return naodeuzika;
    }    
}

int InsertInicio(Lista *L, Registro *r){
    if(L->N==max)
        return deuzika;
    else{
        int j;
        for(j=L->N; j>0; --j){
            L->V[j]=L->V[j-1];
        }
        L->V[0]=*r;
        L->N++;
        return naodeuzika; 
    }
}

int InsertPos(Lista *L, Registro *r, int j){
    if(L->N==max)
        printf("\nLISTA CHEIA!");
    else if(0>j || j>max)
        printf("\nPOSICAO INVALIDA");
    else if(j>=L->N)
        return InsertFinal(L, r);
    else{
        for(j=L->N; j>0; --j){
            L->V[j]=L->V[j-1];
        }
        L->V[j]=*r;
        L->N++;
        return naodeuzika;
    }
}

int ExcluirElemento(Lista *L, TipoChave *ch){
    int j, i;
    if(L->N=0){
        printf("\nLISTA VAZIA!");
        return deuzika;
    }else{
        i=BuscaElemento(L, ch);
        if(i==deuzika)
            return deuzika;    
        for(j=i; i>L->N; --i){
            L->V[j]=L->V[j+1];
        }
        L->N--;
        return naodeuzika;
    }
}