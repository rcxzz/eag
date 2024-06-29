#ifndef FILA_H
#define FILA_H

#define MAX_ITENS 100

typedef struct {
    int itens[MAX_ITENS];
    int tamanho;
}Fila;

void inicializar_fila(Fila* fila);
void inserir_item(Fila* fila, int item);
int remover_item(Fila* fila);
void listar_itens(Fila* fila);

#endif