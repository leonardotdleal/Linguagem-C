#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main() {

    char *palavra;

    printf("Escreva a palavra a verificar se eh palindrome: ");
    scanf("%s",&palavra);

    verificaPalindrome(&palavra);

}
