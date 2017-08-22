#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criaPilha() {
    Pilha *pilha = malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}

void empilha(Pilha *pilha, float valor) {
    if (pilha == NULL)
        printf("\nPilha nao iniciada!");
    else {
        No *no = malloc(sizeof(No));

        no->valor = valor;
        no->anterior = pilha->topo;

        pilha->topo = no;
    }
}

float desempilha(Pilha *pilha) {
    if (pilha != NULL && !estaVazia(pilha)) {
        No *no = pilha->topo;
        float valor = no->valor;

        pilha->topo = no->anterior;

        free(no);

        return valor;
    } else
        printf("\nPilha vazia ou nao iniciada! Nao eh possivel desempilhar");
}

bool estaVazia(Pilha *pilha) {
    return pilha->topo == NULL;
}

void liberaPilha(Pilha *pilha) {
    if (pilha != NULL) {
        No *no = pilha->topo;

        while(no != NULL) {
            No *ant = no->anterior;
            free(no);
            no = ant;
        }

        free(pilha);
    }
}

void imprimePilha(Pilha *pilha) {
    float x = 0;
    Pilha *pilhaAux = criaPilha();

    while (!estaVazia(pilha)) {
        x = desempilha(pilha);
        printf("\nPilha: %.2f", x);
        empilha(pilhaAux, x);
    }

    while (!estaVazia(pilhaAux)) {
        x = desempilha(pilhaAux);
        empilha(pilha, x);
    }

    free(pilhaAux);
}

