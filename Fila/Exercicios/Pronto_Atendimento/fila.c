#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criaFila() {
    Fila *fila = malloc(sizeof(Fila));
    fila->inicio = fila->fim = -1;
    return fila;
}

void inserir(Fila *fila, char *paciente) {
    if (fila == NULL)
        printf("\nFila nao iniciada!");
    else {
        if (estaCheia(fila) == 1) {
            printf("\nFila esta cheia! Nao eh possivel inserir");
        } else {
            fila->fim = (fila->fim + 1) % MAX;
            strcpy(fila->pacientes[fila->fim],paciente);
            if (fila->inicio == -1)
                fila->inicio = fila->fim;
        }
    }
}

char retirar(Fila *fila) {
    char *paciente;

    if (fila == NULL)
        printf("\nFila nao iniciada!");
    else {
        if (estaVazia(fila) == 1)
            printf("\nFila esta vazia! Nao eh possivel retirar");
        else {
            paciente = fila->pacientes[fila->inicio];

            if (fila->inicio == fila->fim)
                fila->inicio = fila->fim = -1;
            else
                fila->inicio = (fila->inicio + 1) % MAX;

            return paciente;
        }
    }
}

int estaCheia(Fila *fila) {
    return (fila->fim + 1) % MAX == fila->inicio;
}

int estaVazia(Fila *fila) {
    return fila->inicio == -1 && fila->fim == -1;
}

void imprimeFila(Fila *fila) {
    if (!estaVazia(fila)) {
        int i;

        for (i = fila->inicio; i != fila->fim; i = (i + 1) % MAX)
            printf("%s\n", &fila->pacientes[i]);
        printf("%s\n", &fila->pacientes[i]);
    }
}

void limpaFila(Fila *fila) {
    if (!estaVazia(fila))
        free(fila);
}



