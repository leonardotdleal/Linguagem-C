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

    if (estaVazio(d))
        d->inicio = no;
    else
        d->fim->proximo = no;

    d->fim = no;
}

float retirarDoInicio(Deque *d) {
    if (estaVazio(d)) {
        printf("\nDeque vazio");
        exit(-1);
    }
    float valor = d->inicio->valor;
    No *no = d->inicio;

    d->inicio = no->proximo;
    free(no);

    if (d->inicio == NULL)
        d->fim = NULL;

    return valor;
}

float retirarDoFim(Deque *d) {
    if (estaVazio(d)) {
        printf("\nDeque vazio");
        exit(-1);
    }
    float valor = d->fim->valor;
    No *no = d->fim;
/*
    free(d->fim);
    d->fim = no->anterior;

    if (d->fim == NULL)
        d->inicio = NULL;
*/
    if (d->inicio == d->fim)
		d->inicio = d->fim = NULL;
	else
		d->fim = no->anterior;

	free(no);

    return valor;
}

bool estaVazio(Deque *deque) {
    return (deque->inicio == NULL);
}

void imprimeDeque(Deque *deque) {
    No* atual;

    if (!estaVazio(deque)) {
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
