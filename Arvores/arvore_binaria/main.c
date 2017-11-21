#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main() {

    Arvore* arv = criaArvore();

    adiciona(arv, 5);
    adiciona(arv, 2);
    adiciona(arv, 3);
    adiciona(arv, 1);
    adiciona(arv, 8);
    adiciona(arv, 7);
    adiciona(arv, 9);

    printf("\nPercorrer");
    percorrer(arv->raiz);


}
