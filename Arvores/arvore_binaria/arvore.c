#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Arvore* criaArvore() {
    Arvore *arvore;
    arvore = malloc(sizeof(Arvore));
    arvore->raiz = NULL;

    return arvore;
}

int estaVazia(Arvore* arvore) {
    return (arvore->raiz == NULL);
}

No* adiciona(Arvore* arvore, No* pai, float valor) {
    No *no = malloc(sizeof(No));

    no->pai = pai;
    no->esquerda = NULL;
    no->direita = NULL;
    no->valor = valor;

    if (pai == NULL)
        arvore->raiz = no;

    return no;
}

void remover(Arvore* arvore, No* no) {
    if (no->esquerda != NULL)
        remover(arvore, no->esquerda);

    if (no->direita != NULL)
        remover(arvore, no->direita);

    if (no->pai == NULL)
        arvore->raiz = NULL;
    else {
        if (no->pai->esquerda == no)
            no->pai->esquerda = NULL;
        else
            no->pai->direita = NULL;
    }

    free(no);
}

void percorrer(No* no) {
    if (no != NULL) {
        printf("%f ", no->valor);

        percorrer(no->esquerda);
        percorrer(no->direita);
    }
}
