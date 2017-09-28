#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void imprimeFila(Fila *Fila) {
    float x = 0;
    Fila *FilaAux = criaFila();

    while (!estaVazia(Fila)) {
        x = desemFila(Fila);
        printf("\nFila [%d]: %.2f", Fila->topo, x);
        emFila(FilaAux, x);
    }

    while (!estaVazia(FilaAux)) {
        x = desemFila(FilaAux);
        emFila(Fila, x);
    }

    free(FilaAux);
}


Fila *criaFila() {
    Fila *fila = malloc(sizeof(Fila));
    fila->inicio = fila->fim = 0;
    return fila;
}

void inserir(Fila *fila, float valor) {
    if (fila == NULL)
        printf("\nFila nao iniciada!");
    else {
        if (estaCheia(fila) == 1) {
            printf("\nFila esta cheia! Nao eh possivel inserir");
        } else
            fila->valores[fila->fim] = valor;
    }
}

float retirar(Fila *fila) {
    if (fila == NULL)
        printf("\nFila nao iniciada!");
    else {
        if (estaVazia(fila) == 1)
            printf("\nFila esta vazia! Nao eh possivel retirar");
        else
            return fila->valores[--fila->topo];
    }
}

bool estaCheia(Fila *fila) {
    if (fila->inicio == fila->fim)
        return true;
    else
        return false;
}

bool estaVazia(Fila *fila) {
    if (fila->inicio == fila->fim)
        return true;
    else
        return false;
}

void imprimeFila(Fila *fila) {
    float x = 0;
    Fila *filaAux = criaFila();

    while (!estaVazia(fila)) {
        x = retirar(fila);
        printf("\nFila [%d]: %.2f", fila->topo, x);
        inserir(filaAux, x);
    }

    while (!estaVazia(filaAux)) {
        x = retirar(filaAux);
        inserir(Fila, x);
    }

    free(FilaAux);
}
