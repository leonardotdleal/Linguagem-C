#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void limpaTela() {
    system("cls");
}

void main() {

    int opcao = 0;
    char *paciente;
    Fila *fila = criaFila();
    char *mensagem = NULL;

    do {
        printf("1) Adicionar paciente\n");
        printf("2) Atender paciente\n");
        printf("3) Verifica se P.A. esta cheio\n");
        printf("4) Imprimir lista de pacientes\n");
        //printf("6) Esvaziar fila\n");
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
                printf("\nDigite o nome do paciente: ");
                scanf("%s", paciente);
                printf("teste\n %s", paciente);
                inserir(fila, paciente);
                mensagem = "Paciente inserido na fila de espera!";
                //free(paciente);
                //printf("\n %s", fila->pacientes);
                limpaTela();
                break;
            case 2:
                paciente = retirar(fila);
                mensagem = "Paciente atendido com sucesso.";
                limpaTela();
                break;
            case 3:
                if (estaCheia(fila))
                    mensagem = "P.A. esta cheio";
                else
                    mensagem = "P.A. nao esta cheio";
                limpaTela();
                break;
            case 4:
                imprimeFila(fila);
                mensagem = NULL;
                system("pause");
                limpaTela();
            case 0:
                printf("\nObrigado por utilizar o sistema.");
                break;
            default:
                printf("\nOpcao invalida");
                //limpaTela();
                break;
        }

    } while(opcao != 0);

}
