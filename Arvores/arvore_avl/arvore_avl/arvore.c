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

void adiciona(Arvore* arvore, float valor) {
    No *no = malloc(sizeof(No));
    No *pai = malloc(sizeof(No));

    no->esquerda = NULL;
    no->direita = NULL;
    no->valor = valor;
    no->pai = NULL;

    if (estaVazia(arvore))
        arvore->raiz = no;
    else {
        pai = localizaPai(arvore->raiz, valor);
        no->pai = pai;

        if (valor <= pai->valor) {
            pai->esquerda = no;
        } else {
            pai->direita = no;
        }
    }

    //return no;
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

No* localizaPai(No* no, float valor) {
    if (no == NULL) {
        return NULL;
    } else {
        No *filho = NULL;

        if (valor <= no->valor)
            filho = no->esquerda;
        else
            filho = no->direita;

        if (filho != NULL)
            return localizaPai(filho, valor);
        else
            return no;
    }
}

void percorrer(No* no) {
    if (no != NULL) {
        printf("%.2f ", no->valor);

        percorrer(no->esquerda);
        percorrer(no->direita);
    }
}

// Raiz, esquerda, direita
void preOrder(No* no) {
    if (no != NULL) {
        printf("%.2f ", no->valor);

        preOrder(no->esquerda);
        preOrder(no->direita);
    }
}

// Esquerda, raiz e direita
void inOrder(No* no) {
    if (no != NULL) {
        inOrder(no->esquerda);
        printf("%.2f ", no->valor);
        inOrder(no->direita);
    }
}

//Esquerda, direita e raiz
void posOrder(No* no) {
    if (no != NULL) {
        posOrder(no->esquerda);
        posOrder(no->direita);
        printf("%.2f ", no->valor);
    }
}

