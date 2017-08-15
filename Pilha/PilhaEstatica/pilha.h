#define MAX 10

struct pilha {
   float values[MAX];
   int top;
} Pilha;

Pilha criaPilha();
void empilha(Pilha *p, float value);
float desempilha(Pilha *p);
void estaCheia();
void estaVazia();
