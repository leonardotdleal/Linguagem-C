// #include "boolean.h"

typedef struct {
    struct No* pai;
    struct No* direita;
    struct No* esquerda;
    float valor;
} No;

typedef struct arvore {
    No* raiz;
} Arvore;

Arvore* criaArvore();
int estaVazia(Arvore* arvore);
No* adiciona(Arvore* arvore, No* pai, float valor);
void remover(Arvore* arvore, No* no);
void percorrer(No* no);
