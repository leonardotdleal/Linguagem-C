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
void adiciona(Arvore* arvore, float valor);
void adicionaVerificandoFB(Arvore* arvore, float valor);
void remover(Arvore* arvore, No* no);
No* localizaPai(No* no, float valor);
void percorrer(No* no);
void inOrder(No* no);
void preOrder(No* no);
void posOrder(No* no);
No* verificaFB(No* no);
void atualizaRaiz(Arvore* arvore, No* no);
