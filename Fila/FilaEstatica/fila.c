#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criaFila() {
    Fila *fila = malloc(sizeof(Fila));
    fila->inicio = fila->fim = -1;
    return fila;
}

void inserir(Fila *fila, float valor) {
    if (fila == NULL)
        printf("\nFila nao iniciada!");
    else {
        if (estaCheia(fila) == 1) {
            printf("\nFila esta cheia! Nao eh possivel inserir");
        } else {
            fila->fim = (fila->fim + 1) % MAX;
            fila->valores[fila->fim] = valor;

            if (fila->inicio == -1)
                fila->inicio = fila->fim;
        }
    }
}

float retirar(Fila *fila) {
    float valor = -1;

    if (fila == NULL)
        printf("\nFila nao iniciada!");
    else {
        if (estaVazia(fila) == 1)
            printf("\nFila esta vazia! Nao eh possivel retirar");
        else {
            valor = fila->valores[fila->inicio];

            if (fila->inicio == fila->fim)
                fila->inicio = fila->fim = -1;
            else
                fila->inicio = (fila->inicio + 1) % MAX;
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
    int i;

    for (i = fila->inicio; i <= fila->fim; i++)
        printf("%.2f\n", fila->valores[i]);
}

void limpaFila(Fila *fila) {
    if (!estaVazia(fila))
        free(fila);
}


