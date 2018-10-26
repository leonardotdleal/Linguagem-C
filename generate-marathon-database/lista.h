#ifndef LISTA_H
#define LISTA_H

typedef struct corredor{
	unsigned int codigo;
	char nome[8];
	int tempo[4];	//duracao da corrida tempo[0] = hora tempo[1] = min tempo[2] = seg tempo[3] = mm
	int data[2]; //data da corrida data[0] = dia data[1] = mes data[2] = ano
} Corredor;

typedef struct No {
	struct No *proximo;
	struct No *anterior;
	Corredor c;
} No;

typedef struct lista {
	No *primeiro;
	No *ultimo;
} Lista;

Lista* cria();
void adiciona(Lista *f, Corredor c);
void adicionaInicio(Lista *f, Corredor c);
void adicionaPosicao(Lista *f, Corredor c, int n);
int vazia(Lista *f);
Corredor retira(Lista *f);
void percorre(Lista *f, int a, int b);
void percorreTudo(Lista *f);
void percorreInvertido(Lista *l);
void limpa(Lista *f);

#endif
