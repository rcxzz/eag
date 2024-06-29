#include <stdlib.h>
#include <stdio.h>
#include "Fila.h"

void inicializar_fila(Fila* fila) {
    fila->tamanho = 0;
}

void inserir_item(Fila* fila, int item) {
    if (fila->tamanho < MAX_ITENS) {
        fila->itens[fila->tamanho] = item;
        fila->tamanho++;
    } else {
        printf("Fila cheia!\n");
    }
}

int remover_item(Fila* fila) {
    if (fila->tamanho == 0) {
        printf("Fila vazia!\n");
        return -1;
    }
    int item = fila->itens[0];
    for (int i = 0; i < fila->tamanho - 1; i++) {
        fila->itens[i] = fila->itens[i + 1];
    }
    fila->tamanho--;
    return item;
}

void listar_itens(Fila* fila) {
    printf("Itens da fila: ");
    for (int i = 0; i < fila->tamanho; i++) {
        printf("%d ", fila->itens[i]);
    }
    printf("\n");
}