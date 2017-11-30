#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void main() {
    Arvore* arv = criaArvore();

    adiciona(arv, 15); //raiz
    adiciona(arv, 24);
    adiciona(arv, 49);
    adiciona(arv, 10);
    adiciona(arv, 8);
    adiciona(arv, 67);
    adiciona(arv, 59);
    adiciona(arv, 9);
    adiciona(arv, 13);
/*
    printf("\n\nPercorrer\n");
    percorrer(arv->raiz);
*/
    printf("\n\nInOrder\n");
    inOrder(arv->raiz);

    printf("\n\nPreOrder\n");
    preOrder(arv->raiz);

    printf("\n\nPosOrder\n");
    posOrder(arv->raiz);
}
