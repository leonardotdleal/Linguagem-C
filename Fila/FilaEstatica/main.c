#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void main() {

    Fila *fila = criaFila();

    inserir(fila, 20.0);
    inserir(fila, 20.8);
    inserir(fila, 20.3);
    inserir(fila, 44.5);
    inserir(fila, 33.3);
    inserir(fila, 20.9);

    imprimeFila(fila);

    retirar(fila);
    retirar(fila);

    printf("\n===========\n");

    imprimeFila(fila);

    limpaFila(fila);
}
