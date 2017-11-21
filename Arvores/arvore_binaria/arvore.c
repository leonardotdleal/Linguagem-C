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

No* adiciona(Arvore* arvore, float valor) {
    No *no = malloc(sizeof(No));
    No *pai = malloc(sizeof(No));

    no->esquerda = NULL;
    no->direita = NULL;
    no->valor = valor;
    no->pai = NULL;

    if (estaVazia(arvore))
        arvore->raiz = no;
    else {
        pai = localizaPai(arvore, no);
        no->pai = pai;
    }

    //if (pai == NULL)
        //arvore->raiz = no;

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
        No* pai = no->pai;

        pai->esquerda = no;
        if (pai->esquerda ==  no)
            pai->esquerda = NULL;
        else
            pai->direita = NULL;
    }

    free(no);
}

void percorrer(No* no) {
    if (no != NULL) {
        printf("%.2f ", no->valor);

        percorrer(no->esquerda);
        percorrer(no->direita);
    }
}

No* localizaPai(Arvore* arvore, No* no) {
    if (estaVazia(arvore))
        return NULL;

    if (no != NULL) {
        if (no->valor <= arvore->raiz->valor) {
            printf("\nESQ");
            localizaPai(arvore, no->esquerda);
        }
        else {
            printf("\nESQ");
            localizaPai(arvore, no->direita);
        }

        printf("%.2f ", no->valor);
        return no;
    }
}
