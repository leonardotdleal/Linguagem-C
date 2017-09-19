#include <stdbool.h>
/*
typedef struct pilha {
   float valor;
   struct Pilha *anterior;
} Pilha;
*/

typedef struct no {
    float valor;
    struct No *anterior;
} No;

typedef struct pilha {
    No *topo;
} Pilha;

Pilha *criaPilha();
void empilha(Pilha *p, float valor);
float desempilha(Pilha *p);
bool estaVazia(Pilha *p);
void imprimePilha(Pilha *pilha);
void liberaPilha(Pilha *pilha);
char *inverteString(char *palavra);
