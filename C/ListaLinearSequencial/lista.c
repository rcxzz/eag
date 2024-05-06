#include "lista.h"
#include <stdio.h>

void Iniciar(Lista *L){
    L->N=0;
}

void Retornar(Lista *L){
    return L->N;
}

void Imprimir(Lista *L){
    int i;
    printf("\n ========== Lista ========== \n");
    for(i=0; i<L->N; i++)
        printf(" %d", L->V[i].chave);
}

int Busca(Lista *L, TipoChave *ch){
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
        return naodeuzika; 
    }
}