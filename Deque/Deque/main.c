#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

void limpaTela() {
    system("cls");
}

void main() {

    int opcao = 0;
    float valor = 0;
    Deque *deque = criaDeque();
    char *mensagem = NULL;

    do {
        printf("1) Inserir elemento no inicio\n");
        printf("2) Inserir elemento no fim\n");
        printf("3) Remover elemento no inicio\n");
        printf("4) Remover elemento no fim\n");
        printf("5) Verifica se esta vazia\n");
        printf("6) Percorrer do inicio\n");
        printf("7) Percorrer do fim\n");
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
                printf("\nDigite o valor: ");
                scanf("%f", &valor);
                inserirNoInicio(deque, valor);
                mensagem = "Valor inserido com sucesso!";
                limpaTela();
                break;
            case 2:
                printf("\nDigite o valor: ");
                scanf("%f", &valor);
                inserirNoFim(deque, valor);
                mensagem = "Valor inserido com sucesso!";
                limpaTela();
                break;
            case 3:
                valor = retirarDoInicio(deque);
                mensagem = "Valor removido com sucesso.";
                limpaTela();
                break;
            case 4:
                valor = retirarDoFim(deque);
                mensagem = "Valor removido com sucesso.";
                limpaTela();
                break;
            case 5:
                if (estaVazio(deque))
                    mensagem = "Deque esta vazio";
                else
                    mensagem = "Deque nao esta vazio";
                limpaTela();
                break;
            case 6:
                percorreDoInicio(deque);
                system("pause");
                limpaTela();
                break;
            case 7:
                percorreDoFim(deque);
                system("pause");
                limpaTela();
                break;
            case 8:
                liberaDeque(deque);
                mensagem = "Deque liberado com sucesso";
                limpaTela();
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
