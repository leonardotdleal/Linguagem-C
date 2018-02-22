#include <stdio.h>
#include <stdlib.h>

/**

 AUTOR: Leonardo Tadeu Diniz Leal
 DESCRIÇÃO: Programa lê um caractere e grava em um arquivo

**/

void main() {

    FILE *fp;
    char numero;
    char filename [] = "arq.txt";

    if (( fp = fopen(filename, "w+")) == NULL) {
        printf ("Erro na abertura do arquivo");
    } else {

        printf("Digite um numero a gravar em arquivo: ");
        scanf("%c", &numero);

        putc(numero, fp);

        printf ("\nNumero gravado");
    }

}

