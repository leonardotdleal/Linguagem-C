#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void main() {
    Arvore* arv = criaArvore();

    adicionaVerificandoFB(arv, 15); //raiz
    adicionaVerificandoFB(arv, 24);
    adicionaVerificandoFB(arv, 49);
    adicionaVerificandoFB(arv, 10);
    adicionaVerificandoFB(arv, 8);
    /*adicionaVerificandoFB(arv, 67);
    adicionaVerificandoFB(arv, 59);
    adicionaVerificandoFB(arv, 9);
    adicionaVerificandoFB(arv, 13);*/
/*
    printf("\n\nPercorrer\n");
    percorrer(arv->raiz);
*/
    printf("\n\nInOrder");
    printf("\nEsquerda, raiz e direita\n");
    inOrder(arv->raiz);

    printf("\n\nPreOrder");
    printf("\nRaiz, esquerda, direita\n");
    preOrder(arv->raiz);

    printf("\n\nPosOrder");
    printf("\nEsquerda, direita e raiz\n");
    posOrder(arv->raiz);

}
