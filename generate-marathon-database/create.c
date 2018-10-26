#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

#define GB 1073741824

int createId(void);
void createTime (int* tempo);
void createData(int* data);
void createName(char* x);
void createRecordsByQuantity(FILE *fp, FILE *fr, Lista *l);
void createByFileSize (FILE* fp, FILE *fr, Lista *l);

int createId(void) {
	/*int x=0;
	x = rand()%150000;*/

	return rand()%150000;
}

void createName(char* x) {
	int cont=0, letra= 0;
	char name[8];

	for(cont = 0; cont < 8; cont++) {
		letra = 97+(rand()%26);
		name[cont] = letra;
	}

	strcpy(x,name);
}

void createTime(int* tempo) {
	int hour;
	int minute;
	int second;
	int thousandth;

	hour = rand()%59;
	minute = rand()%59;
	second = rand()%59;
	thousandth = rand()%99;

	tempo[0] = hour;
	tempo[1] = minute;
	tempo[2] = second;
	tempo[3] = thousandth;
}

void createData(int* data) {
	struct tm *local;
	time_t t;

	time(&t);
	local = localtime(&t);

	data[0] = local->tm_mday;
	data[1] = (local->tm_mon) + 1;
	data[2] = 2018; // local->tm_year;
}

void createRecordsByQuantity(FILE *fp, FILE *fr, Lista *l) {
	int i, qtde;

	printf("\nInforme a quantidade de registros: ");
	scanf("%d", &qtde);

	for(i = 0; i < qtde; i++){
		//printf("%d", i);
		Corredor* maratonista = malloc(sizeof(Corredor));
		maratonista->codigo = createId();

		createData(maratonista->data);
		createTime(maratonista->tempo);
		createName(maratonista->nome);

		printf("\n %d ", maratonista->codigo);
		printf("\n %s ", maratonista->nome);
		printf("\n hora: %d | min: %d | seg: %d | mili: %d", maratonista->tempo[0], maratonista->tempo[1], maratonista->tempo[2] , maratonista->tempo[3]);
		printf("\n dia: %d | mes: %d | ano: %d", maratonista->data[0], maratonista->data[1], maratonista->data[2]);

		escreveDado(fp, maratonista);
    }

    printf("\n\nCriou");

    // mostrar(fp, fr, l);
}

void createByFileSize(FILE* fp, FILE* fr, Lista *l){
	int i=0;

	printf("%d", (100000000/sizeof(Corredor)));

	// system("pause");

	for(i=0; i<100000000/sizeof(Corredor); i++){
		Corredor* maratonista = malloc(sizeof(Corredor));
		maratonista->codigo = createId();
		createData(maratonista->data);
		createTime(maratonista->tempo);
		createName(maratonista->nome);
		escreveDado (fp, maratonista);
    }

    mostrar(fp, fr, l);
}
