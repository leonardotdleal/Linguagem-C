#include "boolean.h"

typedef struct no {
   float valor;
   struct No *anterior;
   struct No *proximo;
} No;

typedef struct deque {
    No *inicio;
    No *fim;
} Deque;

Deque *criaDeque();
void inserirNoInicio(Deque *d, float valor);
float retirarDoFim(Deque *d);
bool estaVazia(Deque *d);
void imprimeDeque(Deque *d);
void liberaDeque(Deque *d);
