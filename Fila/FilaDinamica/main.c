#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void main() {

    int opcao = 0;
    float v = 0;
    Fila *f;

    do {
        printf("1) Criar Fila\n");
        printf("2) Inserir elemento\n");
        printf("3) Remover elemento\n");
        printf("4) Verifica se esta vazia\n");
        printf("5) Imprime fila\n");
        printf("6) Esvazia fila\n");
        printf("0) Sair\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                f = criaFila();
                break;
            case 2:
                printf("\nDigite o valor: ");
                scanf("%f", &v);
                inserir(f, v);
                break;
            case 3:
                v = remove(f);
                printf("\nValor removido: %f", v);
                break;
            case 4:
                if (estaVazia(f))
                    printf("\nFila esta vazia");
                else
                    printf("\nFila nao esta vazia");
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                printf("\nValor invalido");
        }

    } while(opcao != 0);

}
