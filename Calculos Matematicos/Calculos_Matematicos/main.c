#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

    int qtdNum = 0,
        qtdCont = 1,
        firstNum = 1,
        total = 0,
        *vet;
    float media = 0,
          variancia = 0;

    printf("Digite a quantidade de notas desejados:");
    scanf("%d", &qtdNum);

    vet = malloc(qtdNum * sizeof(int));

    for(qtdCont = 1; qtdCont <= qtdNum; qtdCont++) {
        printf("Digite a nota %d :", qtdCont);
        scanf("%d", &vet[qtdCont]);
    }

    for(qtdCont = 1; qtdCont <= qtdNum; qtdCont++) {
        total = total + vet[qtdCont];
    }
    media = total / qtdNum;

    for(qtdCont = 1; qtdCont <= qtdNum; qtdCont++) {
        variancia = variancia + (vet[qtdCont] - media);
    }

    printf("\nMedia %.2f ", media);
    printf("\nVariancia %.2f ", variancia);

}
