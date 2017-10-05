#define MAX 10

typedef struct fila {
   char pacientes[MAX][20];
   int inicio;
   int fim;
} Fila;

Fila *criaFila();
void inserir(Fila *f, char *paciente);
char retirar(Fila *f);
int estaCheia(Fila *f);
int estaVazia(Fila *f);
void imprimeFila(Fila *f);
void limpaFila(Fila *f);

