#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "lista.h"
#define GB 1073741824

void escreveDado (FILE *fp, Corredor* maratonista);
void leArquivo (FILE* fr, Lista* l);
void mostrar(FILE *fp, FILE *fr, Lista *l);

int main(int argc, char **argv) {
	int a = 0, b = 0, op, continua = 1; //variaveis para controlar o intervalo que será percorrido
	FILE *fp = NULL; 	//ponteiro para escrever
	FILE *fr = NULL;	//ponteiro para ler o arquivo
	Lista *l;

	srand((unsigned)time(NULL));

	fp = fopen("registro.txt", "w+");

	if(fp==NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}

	while(continua == 1) {
		op = mostraMenu();

		switch(op) {
			case 1: createRecordsByQuantity(fp, fr, l); break;
			case 2: createByFileSize (fp, fr, l); break;
			case 3: continua = 0; break;
			default: continua = 0; break;
		}
	}
	// createByFileSize (fp);

	//printf("PERCORRENDO OS ARQUIVOS DEPOIS DA LIMPA\n");
	//percorre(l);
	//percorreInvertido(l);
	return 0;

}

void mostrar(FILE *fp, FILE *fr, Lista *l) {
	int a, b;

//	createByFileSize (fp);

	fr = fopen("registro.txt","r");

	if(fr == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}

	l = cria();//cria o arquivo
	leArquivo(fr,l);

	fclose(fp);
	fclose(fr);

	//printf("Escolha o intervalo de a ate b que sera percorrido nos registros\n");
	//scanf("%d %d",&a,&b);

	percorreTudo(l);

	system("pause");

	limpa(l);
}



void escreveDado (FILE *fp, Corredor* maratonista) {
	// fwrite(maratonista,sizeof(Corredor),1,fp);

	fprintf(fp, "%d, %s, %d/%d/%d, %d:%d:%d:%d \n", maratonista->codigo, maratonista->nome, maratonista->data[0], maratonista->data[1], maratonista->data[2], maratonista->tempo[0], maratonista->tempo[1], maratonista->tempo[2], maratonista->tempo[3]);
}

//Objetivo: Transformar esse learquivo em um preenche a lista

void leArquivo (FILE* fr, Lista *l){
	while (!feof(fr)){
		//int i;
		Corredor corredor; //vai guardar as informações
		fread(&corredor, sizeof(Corredor),1,fr);
		adiciona(l,corredor);
   }
}
