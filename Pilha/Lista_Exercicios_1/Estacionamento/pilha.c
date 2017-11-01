#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criaPilha() {
    Pilha *pilha = malloc(sizeof(Pilha));
    pilha->topo = 0;
    return pilha;
}
/*
void empilha(Pilha *pilha, char *carro) {
    if (pilha == NULL)
        printf("\nPilha nao iniciada!");
    else {
        if (estaCheia(pilha) == 1) {
            printf("\nPilha esta cheia! Nao eh possivel empilhar");
        } else
            printf("\nPilha esta cheia! Nao eh possivel empilhar");
            //strcpy(pilha->carros[pilha->topo++],carro);
    }
}

char desempilha(Pilha *pilha) {
    if (pilha == NULL)
        printf("\nPilha nao iniciada!");
    else {
        if (estaVazia(pilha) == 1)
            printf("\nPilha esta vazia! Nao eh possivel desempilhar");
        else
            return pilha->carros[--pilha->topo];
    }
}

bool estaCheia(Pilha *pilha) {
    return (pilha->topo == MAX);
}

bool estaVazia(Pilha *pilha) {
    return (pilha->topo == 0);
}

void imprimePilha(Pilha *pilha) {
    char x = 0;
    Pilha *pilhaAux = criaPilha();

    while (!estaVazia(pilha)) {
        x = desempilha(pilha);
        printf("\nPilha [%d]: %.2f", pilha->topo, x);
        empilha(pilhaAux, x);
    }

    while (!estaVazia(pilhaAux)) {
        x = desempilha(pilhaAux);
        empilha(pilha, x);
    }

    free(pilhaAux);
}
*/
