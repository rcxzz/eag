#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

void IniciarLista(Lista *L){
    int i;
    for(i=0; i<max-1; ++i)
        L->V[i].proximo=i+1;
    L->V[max-1].proximo=deuzika;
    L->inicio=deuzika;
    L->disponivel=0;
}

int NumeroElementos(Lista *L){
    int i=L->inicio;
    int tamanho=0;
    while(i!=deuzika){
        tamanho++;
        i=L->V[i].proximo;
    }
    return tamanho;
}

void ImprimirElementos(Lista *L){
    int i=L->inicio;
    while(i!=deuzika){
        printf("\n %d ", L->V[i]);
        i=L->V[i].proximo;    
    }
}

int BuscaSequencial(Lista *L, Tipo_Chave ch){
    int i=L->inicio;
    while(i!=deuzika && L->V[i].r.chave<ch)
        i=L->V[i].proximo;
    if(i!=deuzika && L->V[i].r.chave==ch)
        return i;        
    else return deuzika;
}

int InserirElementoOrdenado(Lista *L, Registro r){
    int i=L->inicio;
    Tipo_Chave ch=r.chave;
    if(L->disponivel==deuzika)
        return deuzika;
    else{
         int pred;
        while(i!=deuzika && L->V[i].r.chave<ch)
            pred=i;
            i=L->V[i].proximo;
        if(i!=deuzika && L->V[i].r.chave==ch){
            return deuzika;
        }else{
            int aux=L->disponivel;
            L->V[L->disponivel].proximo=L->V[pred].proximo;
            L->V[pred].proximo=aux;
            L->V[L->disponivel].r.chave=ch;
            return naodeuzika;
        }
    }
}

int RemoverElemento(Lista *L, Tipo_Chave ch){
    int i=L->inicio;
    int anterior=deuzika;
    while(i!=deuzika && L->V[i].r.chave<ch){
        anterior=i;
        i=L->V[i].proximo;
    }
    if(i==deuzika || L->V[i].r.chave!=ch)
        return deuzika;
    if(anterior==deuzika)
        L->inicio=L->V[i].proximo;
    else
        L->V[anterior].proximo=L->V[i].proximo;
    DevolverNOParaLista(L,i);
    return naodeuzika;    
}

void DevolverNOParaLista(Lista *L, int i){
    L->V[i].proximo=L->disponivel;
    L->disponivel=i;
}