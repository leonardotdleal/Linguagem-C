#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void main() {

    int opcao = 0;
    float valor = 0;
    Fila *fila;
    char *mensagem = NULL;

    do {
        printf("1) Criar Fila\n");
        printf("2) Inserir elemento\n");
        printf("3) Remover elemento\n");
        printf("4) Verifica se esta vazia\n");
        printf("5) Imprimir fila\n");
        printf("6) Esvaziar fila\n");
        printf("0) Sair\n\n");

        if (mensagem != NULL) {
            printf("+====================================================+\n");
            printf("  %s", mensagem);
            printf("\n+====================================================+\n\n");
        }

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fila = criaFila();
                mensagem = "Fila criada com sucesso!";
                limpaTela();
                break;
            case 2:
                printf("\nDigite o valor: ");
                scanf("%f", &valor);
                inserir(fila, valor);
                mensagem = "Valor inserido com sucesso!";
                limpaTela();
                break;
            case 3:
                valor = retirar(fila);
                mensagem = "Valor removido com sucesso.";
                limpaTela();
                break;
            case 4:
                if (estaVazia(fila))
                    printf("\nFila esta vazia");
                else
                    printf("\nFila nao esta vazia");
                break;
            case 5:
                imprimeFila(fila);
                mensagem = NULL;
                system("pause");
                limpaTela();
                break;
            case 6:
                break;
            case 0:
                printf("\nObrigado por utilizar o sistema.");
                break;
            default:
                printf("\nValor invalido");
                //limpaTela();
                break;
        }

    } while(opcao != 0);

}

void limpaTela() {
    system("cls");
}
