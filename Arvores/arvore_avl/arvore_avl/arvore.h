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
No* adiciona(Arvore* arvore, float valor);
void remover(Arvore* arvore, No* no);
void percorrer(No* no);
No* localizaPai(Arvore* arvore, No* no);

