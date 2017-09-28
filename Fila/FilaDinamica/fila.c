#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criaFila() {
    Fila *f = malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    return f;
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

bool estaVazia(Fila *f) {
    return (f->fim == NULL);
}
void imprimeFila(Fila *f);
