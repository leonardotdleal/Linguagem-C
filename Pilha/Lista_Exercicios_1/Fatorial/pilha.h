#define MAX 10
#include "boolean.h"

typedef struct pilha {
   float valores[MAX];
   int topo;
} Pilha;

Pilha *criaPilha();
void empilha(Pilha *p, float valor);
float desempilha(Pilha *p);
bool estaCheia(Pilha *p);
bool estaVazia(Pilha *p);
void imprimePilha(Pilha *pilha);
