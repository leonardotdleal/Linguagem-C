#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criaFila() {
    Fila *fila = malloc(sizeof(Fila));
    fila->inicio = fila->fim = NULL;
    return fila;
}

void inserir(Fila *f, float valor) {
    No *no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo = NULL;

    if (estaVazia(f))
        f->inicio = no;
    else
        f->fim->proximo = no;

    f->fim = no;
}

float retirar(Fila *f) {
    if (!estaVazia(f)) {
        float valor = f->inicio->valor;

        No *no = f->inicio;
        f->inicio = f->inicio->proximo;
        free(no);

        if (f->inicio == NULL)
            f->fim = NULL;

        return valor;
    }
}

bool estaVazia(Fila *fila) {
    return (fila->inicio == NULL);
}

void imprimeFila(Fila *fila) {
    No* atual;

    if (!estaVazia(fila)) {
        printf("\n\n===================================\n");

        for (atual = fila->inicio; atual != NULL; atual = atual->proximo)
            printf("%.2f\n",atual->valor);

        printf("===================================\n");
    } else
        printf("\nFila vazia.");
}
