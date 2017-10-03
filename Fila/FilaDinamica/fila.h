#include "boolean.h"

typedef struct no {
   float valor;
   struct No *proximo;
} No;

typedef struct Fila {
    No *inicio;
    No *fim;
} Fila;

Fila *criaFila();
void inserir(Fila *f, float valor);
float retirar(Fila *f);
bool estaVazia(Fila *f);
void imprimeFila(Fila *f);
void liberaFila(Fila *f);
