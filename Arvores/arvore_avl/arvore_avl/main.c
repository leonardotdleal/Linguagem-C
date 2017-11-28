#include <stdio.h>
#include <stdlib.h>

void main() {
    Arvore* arv = criaArvore();

    adiciona(arv, 15);
    adiciona(arv, 24);
    adiciona(arv, 49);
    adiciona(arv, 10);
    adiciona(arv, 8);
    adiciona(arv, 67);
    adiciona(arv, 59);
    adiciona(arv, 9);
    adiciona(arv, 13);

    printf("\nPercorrer");
    percorrer(arv->raiz);
}
