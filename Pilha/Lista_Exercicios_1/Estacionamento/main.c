#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void limpaTela() {
    system("cls");
}

void main() {

    int opcao = 0;
    char *carro;
    Pilha *pilha = criaPilha();
    char *mensagem = NULL;

    do {
        printf("1) Estacionar carro\n");
        printf("2) Retirar carro\n");
        printf("3) Verifica se estacionamento esta vazio\n");
        printf("4) Verifica se estacionamento esta cheio\n");
        printf("5) Imprimir lista de carros no estacionamento\n");
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
                if (!estaCheia(pilha)) {
                    printf("\nDigite a placa do carro: ");
                    scanf("%s", &carro);
                    inserir(pilha, &carro);
                    mensagem = "Carro inserido no estacionamento!";
                } else {
                    mensagem = "Estacionamento esta lotado!";
                }
                limpaTela();
                break;
            case 2:
                if (!estaVazia(pilha)) {
                    carro = retirar(pilha);
                    mensagem = "Carro retirado com sucesso";
                } else {
                    mensagem = "Estacionamento esta vazio! Nao temos carro a retirar";
                }
                limpaTela();
                break;
            case 3:
                if (estaVazia(pilha))
                    mensagem = "Estacionamento esta vazio";
                else
                    mensagem = "Estacionamento nao esta vazio";
                limpaTela();
                break;
            case 4:
                if (estaCheia(pilha))
                    mensagem = "Estacionamento esta cheio";
                else
                    mensagem = "Estacionamento nao esta cheio";
                limpaTela();
                break;
            case 5:
                imprimepilha(pilha);
                mensagem = NULL;
                system("pause");
                limpaTela();
            case 0:
                break;
            default:
                mensagem = "Opcao invalida";
                break;
        }

    } while(opcao != 0);

}
