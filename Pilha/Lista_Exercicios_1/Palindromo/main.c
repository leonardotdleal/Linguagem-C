#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main() {

    char *palavra = malloc(sizeof(char));

    printf("Escreva a palavra a verificar se eh palindrome: ");
    gets(&palavra);

    verificaPalindrome(&palavra);

}
