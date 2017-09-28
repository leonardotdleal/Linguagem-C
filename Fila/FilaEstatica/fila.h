#define MAX 10

typedef struct fila {
   float valores[MAX];
   int inicio;
   int fim;
} Fila;

Fila *criaFila();
void inserir(Fila *f, float valor);
float retirar(Fila *f);
bool estaCheia(Fila *f);
bool estaVazia(Fila *f);
void imprimeFila(Fila *f);
