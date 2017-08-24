#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main() {

    Pilha *pilha = criaPilha();

    empilha(pilha, 20.0);
    empilha(pilha, 20.8);
    empilha(pilha, 20.3);
    empilha(pilha, 44.5);
    empilha(pilha, 33.33);
    empilha(pilha, 20.9);

    imprimePilha(pilha);

    printf("\n\n");

    desempilha(pilha);
    desempilha(pilha);

    imprimePilha(pilha);

    liberaPilha(pilha);

}

/*

int verificaExpressao(char *expressao){

    int i = 0;
    Pilha pilha;

    inicializarPilha(&pilha,strlen(expressao));

    for(i = 0; i <= strlen(expressao); i++){
        if(expressao[i] == '(')
            empilhar(&pilha,expressao[i]);

        if(expressao[i] == ')') {
            if(estaVazia(&pilha) == 1)
                printf("\nFecha parenteses sem abre parenteses (posicao %d)", i);
            else
                desempilhar(&pilha);
        }
    }

    if(estaVazia(&pilha) == 1)
        return 1;
    else
        return 0;

}

*/
