#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void verificaPalindrome(char *palavra) {

    Pilha *pilha = criaPilha();
    int i = 0;
    char *palavraInvertida = (char*) malloc(strlen(palavra)*sizeof(char));

    for(i = 0; i <= strlen(palavra) - 1; i++)
        empilha(&pilha,palavra[i]);

    for(i = 0; i <= strlen(palavra) - 1; i++)
        palavraInvertida[i] = desempilha(&pilha);

    if (strcmp(palavra,palavraInvertida) == 0)
        printf("\nPalavra eh palindrome!");
    else
        printf("\nPalavra nao eh palindrome!");

    free(pilha);
    free(palavraInvertida);

}
