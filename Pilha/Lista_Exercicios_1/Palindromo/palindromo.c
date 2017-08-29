#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

char *removeEspacos(char *palavra) {
    int i = 0, j = 0;
    char *palavraNova = malloc(sizeof(char));

    for(i=0,j=0; i <= strlen(palavra); i++) {
        if(palavra[i] != ' ')
            palavraNova[j++] = palavra[i];
    }

    //printf("funcao: %s", palavraNova);

    return palavraNova;
}

void verificaPalindrome(char *palavra) {

    Pilha *pilha = criaPilha();
    int i = 0;
    char *palavraInvertida = (char*) malloc((strlen(palavra) - 1)*sizeof(char));
    char *palavraSemEspacos = malloc(sizeof(char));

    palavraSemEspacos = removeEspacos(palavra);

    printf("\npalavra: %s", palavra);
    printf("\npalavraSemEspacos: %s", palavraSemEspacos);

    for(i = 0; i <= (strlen(palavraSemEspacos) - 1); i++) {
        //if (palavra[i] != ' ') {
            empilha(&pilha,palavraSemEspacos[i]);

    }

    for(i = 0; i <= (strlen(palavraSemEspacos) - 1); i++)
        palavraInvertida[i] = desempilha(&pilha);
    palavraInvertida[i] = stdin;

    printf("%s", palavraSemEspacos);
    printf("\n");
    printf("%s", palavraInvertida);

    if (strcmp(palavraSemEspacos,palavraInvertida) == 0)
        printf("\nPalavra eh palindrome!");
    else
        printf("\nPalavra nao eh palindrome!");

    free(pilha);
    free(palavraInvertida);

}
