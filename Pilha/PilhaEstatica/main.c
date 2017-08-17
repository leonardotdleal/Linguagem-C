#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main() {

    Pilha *pilha = criaPilha();
    float valor = 0;

    empilha(pilha, 20.0);
    empilha(pilha, 20.8);
    empilha(pilha, 20.3);
    empilha(pilha, 44.5);
    empilha(pilha, 33.33);
    empilha(pilha, 20.9);

    valor = desempilha(pilha);

    imprimePilha(pilha);

    free(pilha);

}
