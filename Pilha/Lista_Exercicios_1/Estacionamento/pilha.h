#define MAX 5
#include "boolean.h"

typedef struct pilha {
   char carros[MAX][10];
   int topo;
} Pilha;

Pilha *criaPilha();
void empilha(Pilha *p, char *carro);
char desempilha(Pilha *p);
bool estaCheia(Pilha *p);
bool estaVazia(Pilha *p);
void imprimePilha(Pilha *pilha);
