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
void inserirNoFim(Deque *d, float valor);
float retirarDoInicio(Deque *d);
float retirarDoFim(Deque *d);
bool estaVazio(Deque *d);
void liberaDeque(Deque *d);
float percorreDoInicio(Deque *d);
float percorreDoFim(Deque *d);
