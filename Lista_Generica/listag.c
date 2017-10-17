#include <stdio.h>
#include <stdlib.h>
#include "listag.h"

void adicionaInicio(Lista *l, void *v) {
    No *no = malloc(sizeof(No));

    no->v = malloc(l->tamanho);
    memcpy(no->v, v, l->tamanho);
    no->anterior = NULL;
    no->proximo = d->cabeca;

    l->cabeca = no;

    if (l->cauda == NULL)
        l->cauda = l->cabeca;
}

void adicionaFim(Lista *l, void *v) {
    No *no = malloc(sizeof(No));

    no->v = malloc(l->tamanho);
    memcpy(no->v, v, l->tamanho);
    no->anterior = d->cauda;
    no->proximo = NULL;

    l->cauda = no;

    if (l->cabeca == NULL)
        l->cabeca = l->cauda;
}

void percorre(Lista *l, void (callback)(void*) {
    No *no = l->cabeca;
    while (no != NULL) {
        callback(no->v);
        no = no->proximo;
    }
}
