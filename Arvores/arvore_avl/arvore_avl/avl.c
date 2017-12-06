#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

/* FB – Fator de balanceamento */
int fb(No* no) {
    int esquerda = 0, direita = 0;

    if (no->esquerda != NULL)
        esquerda = altura(no->esquerda) + 1;

    if (no->direita != NULL)
        direita = altura(no->direita) + 1;

    return (esquerda - direita);
}

int altura(No* no) {
    int esquerda = 0, direita = 0;

    if (no->esquerda != NULL)
        esquerda = altura(no->esquerda) + 1;

    if (no->direita != NULL)
        direita = altura(no->direita) + 1;

    return (esquerda > direita ? esquerda : direita); // expressão ternária
}

/* RSE – Rotação Simples a Esquerda */
No* rse(Arvore *arv, No* no) {
    printf("\nRSE: %f", no->valor);

    No* pai = no->pai;
    No* direita = no->direita;

    no->direita = direita->esquerda;
    no->pai = direita;

    direita->esquerda = no;
    direita->pai = pai;

    if(direita->pai == NULL)
        arv->raiz = direita;
    else
        if(pai->direita == no)
			pai->direita = direita;
		else
			pai->esquerda = direita;

    return direita;
}

/* RSD – Rotação Simples a Direita */
No* rsd(Arvore *arv, No* no) {
    printf("\nRSD: %f", no->valor);

    No* pai = no->pai;
    No* esquerda = no->esquerda;

    no->esquerda = esquerda->direita;
    no->pai = esquerda;

    esquerda->direita = no;
    esquerda->pai = pai;

    if(esquerda->pai == NULL)
        arv->raiz = esquerda;
    else
       	if(pai->direita == no)
			pai->direita = esquerda;
		else
			pai->esquerda = esquerda;

    return esquerda;
}

/* RDE – Rotação Dupla a Esquerda */
No* rde(Arvore *arv, No* no) {
    no->direita = rsd(arv, no->direita);
    return rse(arv, no);
}

/* RDD – Rotação Dupla a Direita */
No* rdd(Arvore *arv, No* no) {
    no->esquerda = rse(arv, no->esquerda);
    return rsd(arv, no);
}
