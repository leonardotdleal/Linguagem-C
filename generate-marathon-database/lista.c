#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* cria() {
	Lista *f;
	f = malloc(sizeof(Lista));
	f->primeiro = f->ultimo = NULL; // esta vazia
	return f;
}

void adiciona(Lista *f, Corredor c) {
	No *no = malloc(sizeof(No));
	no->c = c;
	no->proximo=NULL;
	no->anterior=NULL;

	if(f->ultimo!=NULL) {
		no->anterior = f->ultimo;
		f->ultimo->proximo = no;
	}

	f->ultimo = no;

	if (f->primeiro == NULL) {
        f->primeiro = no;
    }
}

void adicionaInicio(Lista *f, Corredor c) {
	No *no = malloc(sizeof(No));
	no->c = c;
	no->proximo = f->primeiro;
	no->anterior = NULL;
	f->primeiro->anterior = no;
	f->primeiro=no;
	if (f->ultimo==NULL) f->ultimo = no;
}

void adicionaPosicao(Lista *f, Corredor c, int n) //trabalhar com ponteiro, depois do no com valor 10
{
	No *no = malloc(sizeof(No));
	No *aux = NULL;
	int cont=0;
	no->c = c;
	for (aux = f->primeiro;aux!=NULL;aux = aux->proximo)
	{
		cont++;
		if(cont==n-1)
		{
			no->proximo = aux->proximo;
			aux->proximo->anterior = no;
			no->anterior = aux;
			aux->proximo = no;
			if(no->proximo==NULL) f->ultimo=no;
		}
		if(n==1) adicionaInicio(f,c);
	}
}

int vazia(Lista *f)
{
	return f->primeiro == NULL && f->ultimo == NULL;
}

Corredor retira(Lista *f)
{
	Corredor c;
	No* no;
	if(vazia(f))
	{
		printf("Fila vazia!\n");
		exit(-1);
	}
	c = f->primeiro->c;
	no = f->primeiro;
	f->primeiro = f->primeiro->proximo;
	f->primeiro->anterior = NULL;
	free(no);
	if(f->primeiro == NULL) f->ultimo = NULL;
	return c;
}

void percorre(Lista *f, int a, int b)
{
	int contador=0;
	No* atual;
	for (atual = f->primeiro; atual!= NULL; atual = atual->proximo)
	{
		contador++;
		if(contador>=a && contador<=b)
		{
			printf("Nome: %s\n",atual->c.nome);
			printf("Codigo: %d\n",atual->c.codigo);
			printf("Tempo: %d:%d:%d:%d\n",atual->c.tempo[0],atual->c.tempo[1],atual->c.tempo[2],atual->c.tempo[3]);
			printf("Data: %d/%d/%d\n",atual->c.data[0],atual->c.data[1],atual->c.data[2]);
			printf("\n");
		}
	}
}

void percorreTudo(Lista *f)
{
	int contador=0;
	No* atual;
	for (atual = f->primeiro; atual!= NULL; atual = atual->proximo)
	{
		printf("Nome: %s\n",atual->c.nome);
		printf("Codigo: %d\n",atual->c.codigo);
		printf("Tempo: %d:%d:%d:%d\n",atual->c.tempo[0],atual->c.tempo[1],atual->c.tempo[2],atual->c.tempo[3]);
		printf("Data: %d/%d/%d\n",atual->c.data[0],atual->c.data[1],atual->c.data[2]);
		printf("\n");
	}
}

void percorreInvertido(Lista *l)
{
	No *atual;
	for (atual = l->ultimo; atual!=NULL; atual = atual->anterior)
	{
		printf("Nome: %s\n",atual->c.nome);
		printf("Codigo: %d\n",atual->c.codigo);
		printf("Tempo: %d:%d:%d:%d\n",atual->c.tempo[0],atual->c.tempo[1],atual->c.tempo[2],atual->c.tempo[3]);
		printf("Data: %d/%d/%d\n",atual->c.data[0],atual->c.data[1],atual->c.data[2]);
		printf("\n");
	}
}

void limpa(Lista *f)
{
	No *atual;
	atual=f->primeiro;
	f->primeiro = f->primeiro->proximo;
	free(atual);
	if(f->primeiro!=NULL) limpa(f);
	f->ultimo = NULL;
}

