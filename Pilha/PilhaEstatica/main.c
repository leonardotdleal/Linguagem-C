#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main() {

    Pilha *pilha = criaPilha();

    empilha(pilha, 20.0);
    empilha(pilha, 20.8);
    empilha(pilha, 20.3);
    empilha(pilha, 44.5);
    empilha(pilha, 33.33);
    empilha(pilha, 20.9);

    imprimePilha(pilha);

    printf("\n\n");

    desempilha(pilha);
    desempilha(pilha);

    imprimePilha(pilha);

    free(pilha);

}
