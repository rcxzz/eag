#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    Fila fila;
    inicializar_fila(&fila);

    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Inserir item na fila\n");
        printf("2. Remover item da fila\n");
        printf("3. Listar dados da fila\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int item;
                printf("Digite o valor do item: ");
                scanf("%d", &item);
                inserir_item(&fila, item);
                break;
            }
            case 2: {
                int item = remover_item(&fila);
                if (item != -1) {
                    printf("Item removido: %d\n", item);
                }
                break;
            }
            case 3:
                listar_itens(&fila);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}