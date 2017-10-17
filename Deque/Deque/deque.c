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

    if(d->inicio != NULL)
        d->inicio->anterior = no;

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
    else
        d->inicio->anterior = NULL;

    return valor;
}

float retirarDoFim(Deque *d) {
    if (estaVazio(d)) {
        printf("\nDeque vazio");
        exit(-1);
    }
    float valor = d->fim->valor;
    No *no = d->fim;

    d->fim = no->anterior;
    free(no);

    if (d->fim == NULL)
        d->inicio = NULL;
    else
        d->fim->proximo = NULL;

    return valor;
}

bool estaVazio(Deque *deque) {
    return (deque->inicio == NULL);
}

void imprimeDeque(Deque *deque) {
    No* atual;

    if (!estaVazio(deque)) {
        printf("\n\n===================================\n");

        int i = 0;
        for (atual = deque->inicio; atual != NULL; atual = atual->proximo){
            printf("%.2f %d\n",atual->valor,i);
            i++;
        }

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
