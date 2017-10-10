#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

Deque *criaDeque() {
    Deque *deque = malloc(sizeof(Deque));
    deque->inicio = deque->fim = NULL;
    return deque;
}

void inserirNoInicio(Deque *d, float valor) {
    No *no = malloc(sizeof(No));

    no->valor = valor;
    no->anterior = NULL;
    no->proximo = d->inicio;

    d->inicio = no;

    if (d->fim == NULL)
        d->fim = d->inicio;
}

void inserirNoFim(Deque *d, float valor) {
    No *no = malloc(sizeof(No));

    no->valor = valor;
    no->anterior = d->fim;
    no->proximo = NULL;

    d->fim = no;

    if (d->inicio == NULL)
        d->inicio = d->fim;
}

float retirarDoFim(Deque *d) {
    float valor;
    No* no;

    if (vazio(d)) {
        printf("Deque vazio");
        exit(-1);
    }

    valor = d->fim->valor;
    no = d->fim->anterior;
    free(d->fim);
    d->fim = no;

    if (d->fim == NULL)
        d->inicio = NULL;

    return valor;
}

bool estaVazia(Deque *deque) {
    return (deque->inicio == NULL);
}

void imprimeDeque(Deque *deque) {
    No* atual;

    if (!estaVazia(deque)) {
        printf("\n\n===================================\n");

        for (atual = deque->inicio; atual != NULL; atual = atual->proximo)
            printf("%.2f\n",atual->valor);

        printf("===================================\n");
    } else
        printf("\nDeque vazia.");
}

void liberaDeque(Deque *f) {
    // TODO implementar função
    /*
        No* atual = f->inicio;
        while (atual != NULL) {
        No* proximo = atual->proximo;
        free(atual);
        atual = proximo;
        }
        free(f);
    */
}
