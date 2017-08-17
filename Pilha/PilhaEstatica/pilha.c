#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criaPilha() {
    Pilha *pilha = malloc(sizeof(Pilha));
    pilha->topo = 0;
    return pilha;
}

void empilha(Pilha *pilha, float valor) {
    if (pilha == NULL)
        printf("\nPilha nao iniciada!");
    else {
        if (estaCheia(pilha) == 1) {
            printf("\nPilha esta cheia! Nao eh possivel empilhar");
        } else
            pilha->valores[pilha->topo++] = valor;
    }
}

float desempilha(Pilha *pilha) {
    if (pilha == NULL)
        printf("\nPilha nao iniciada!");
    else {
        if (estaVazia(pilha) == 1)
            printf("\nPilha esta vazia! Nao eh possivel desempilhar");
        else
            return pilha->valores[--pilha->topo];
    }
}

bool estaCheia(Pilha *pilha) {
    if (pilha->topo == MAX)
        return true;
    else
        return false;
}

bool estaVazia(Pilha *pilha) {
    if (pilha->topo == 0)
        return true;
    else
        return false;
}

void imprimePilha(Pilha *pilha) {
    float x = 0;
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
