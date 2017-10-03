#define MAX 10

typedef struct fila {
   float valores[MAX];
   int inicio;
   int fim;
} Fila;

Fila *criaFila();
void inserir(Fila *f, float valor);
float retirar(Fila *f);
int estaCheia(Fila *f);
int estaVazia(Fila *f);
void imprimeFila(Fila *f);
void limpaFila(Fila *f);
