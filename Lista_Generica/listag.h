#include "boolean.h"

typedef struct {
    struct No* anterior; //ponteiro para o nó anterior da lista
    struct No* proximo; //ponteiro para o próximo nó da lista
    void *v; //conteúdo de um nó arbitrário da lista
} No;

typedef struct lista {
    No* cabeca; //inicio da lista
    No* cauda; //fim da lista
    int tamanho; //tamanho do conteúdo em bytes
} Lista;

void adicionaInicio(Lista *l, void *v);
void adicionaFim(Lista *l, void *v);
void percorre(Lista *l, void (callback)(void*);
