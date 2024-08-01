#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

No* getNode(){
    No* p=(No*)malloc(sizeof(No));
    return p;
}

No* inserir(No* raiz, int chave){
    if(raiz==NULL){
        No* novo=getNode();
        novo->chave=chave;
        novo->esquerda=novo->direita=novo->pai=NULL;
        return novo;
    }
    if(chave<raiz->chave){
        No* esquerda=inserir(raiz->esquerda, chave);
        raiz->esquerda=esquerda;
        if(esquerda!=NULL) 
            esquerda->pai=raiz;
    }
    else if(chave>raiz->chave){
        No* direita=inserir(raiz->direita, chave);
        raiz->direita=direita;
        if(direita!=NULL) 
            direita->pai=raiz;
    }
    return raiz;
}

No* buscaChave(No* raiz, int chave){
    if(raiz==NULL || raiz->chave==chave)
        return raiz;
    if(chave<raiz->chave)
        return buscar_chave(raiz->esquerda, chave);

    return buscar_chave(raiz->direita, chave);
}

No* remover(No* raiz, int chave){
    if(raiz==NULL)
        return raiz;
    if(chave<raiz->chave){
        raiz->esquerda=remover(raiz->esquerda, chave);
    } 
    else if(chave>raiz->chave)
        raiz->direita=remover(raiz->direita, chave);
    else{
        if(raiz->esquerda==NULL){
            No* temp=raiz->direita;
            free(raiz);
            return temp;
        }
        else if(raiz->direita==NULL){
            No* temp=raiz->esquerda;
            free(raiz);
            return temp;
        }
        No* temp=minimo(raiz->direita);
        raiz->chave=temp->chave;
        raiz->direita=remover(raiz->direita, temp->chave);
    }
    return raiz;
}

void preOrdem(No* raiz){
    if(raiz!=NULL){
        printf("%d ", raiz->chave);
        pre_ordem(raiz->esquerda);
        pre_ordem(raiz->direita);
    }
}

void emOrdem(No* raiz){
    if(raiz!=NULL){
        em_ordem(raiz->esquerda);
        printf("%d ", raiz->chave);
        em_ordem(raiz->direita);
    }
}

void posOdem(No* raiz){
    if(raiz!=NULL){
        pos_ordem(raiz->esquerda);
        pos_ordem(raiz->direita);
        printf("%d ", raiz->chave);
    }
}

No* predecessor(No* n){
    if(n->esquerda!=NULL){
        No* atual=n->esquerda;
        while(atual&&atual->direita!=NULL)
            atual=atual->direita;
        return atual;
    }
    No* pred=n->pai;
    while(pred!=NULL&&n==pred->esquerda){
        n=pred;
        pred=pred->pai;
    }
    return pred;
}

No* sucessor(No* n) {
    if(n->direita!=NULL){
        No* atual=n->direita;
        while(atual&&atual->esquerda!=NULL)
            atual=atual->esquerda;
        return atual;
    }
    No* suc=n->pai;
    while(suc!=NULL&&n==suc->direita){
        n=suc;
        suc=suc->pai;
    }
    return suc;
}

No* maximo(No* raiz){
    No* atual=raiz;
    while(atual&&atual->direita!=NULL)
        atual=atual->direita;
    return atual;
}

No* minimo(No* raiz){
    No* atual=raiz;
    while(atual&&atual->esquerda!=NULL)
        atual=atual->esquerda;
    return atual;
}