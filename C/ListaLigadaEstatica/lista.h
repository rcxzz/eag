#include <stdio.h>
#include <stdlib.h>

#define max 50
#define deuzika -1
#define naodeuzika 1

typedef int Tipo_Chave;

typedef struct{
    Tipo_Chave chave;
}Registro;

typedef struct{
    Registro r;
    int proximo;
}Elemento;

typedef struct{
    Elemento V[max];    
    int inicio;
    int disponivel;
}Lista;

void IniciarLista(Lista *L);
int NumeroElementos(Lista *L);
void ImprimirElementos(Lista *L);
int BuscaSequencial(Lista *L, Tipo_Chave ch);
int InserirElementoOrdenado(Lista *L, Registro r);
int RemoverElemento(Lista *L, Tipo_Chave ch);
void DevolverNOParaLista(Lista *L, int i);