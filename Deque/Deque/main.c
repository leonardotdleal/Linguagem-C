#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

void limpaTela() {
    system("cls");
}

void main() {

    int opcao = 0;
    float valor = 0;
    Deque *deque;
    char *mensagem = NULL;

    do {
        printf("1) Criar Deque\n");
        printf("2) Inserir elemento no inicio\n");
        printf("3) Inserir elemento no fim\n");
        printf("4) Remover elemento no inicio\n");
        printf("5) Remover elemento no fim\n");
        printf("6) Verifica se esta vazia\n");
        printf("7) Imprimir deque\n");
        printf("8) Esvaziar deque\n");
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
                deque = criaDeque();
                mensagem = "Deque criado com sucesso!";
                limpaTela();
                break;
            case 2:
                printf("\nDigite o valor: ");
                scanf("%f", &valor);
                inserirNoInicio(deque, valor);
                mensagem = "Valor inserido com sucesso!";
                limpaTela();
                break;
            case 3:
                printf("\nDigite o valor: ");
                scanf("%f", &valor);
                inserirNoFim(deque, valor);
                mensagem = "Valor inserido com sucesso!";
                limpaTela();
                break;
            case 4:
                valor = retirarDoInicio(deque);
                mensagem = "Valor removido com sucesso.";
                limpaTela();
                break;
            case 5:
                valor = retirarDoFim(deque);
                mensagem = "Valor removido com sucesso.";
                limpaTela();
                break;
            case 6:
                if (estaVazio(deque))
                    mensagem = "Deque esta vazio";
                else
                    mensagem = "Deque nao esta vazio";
                limpaTela();
                break;
            case 7:
                imprimeDeque(deque);
                mensagem = NULL;
                system("pause");
                limpaTela();
                break;
            case 8:
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
