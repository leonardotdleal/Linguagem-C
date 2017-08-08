#include <stdio.h>
#include <stdlib.h>

void main() {
    int qtdNum = 0,
        qtdCont = 0,
        firstNum = 1,
        secNum = 1,
        auxNum = 1,
        *vet;

    printf("Digite a quantidade de numeros desejados na serie:");
    scanf("%d", &qtdNum);

    vet = malloc(qtdNum * sizeof(int));

    for(qtdCont = 0; qtdCont < qtdNum; qtdCont++) {
        if (qtdCont > 1) {
            vet[qtdCont] = firstNum + secNum;
            auxNum = secNum;
            secNum = firstNum + auxNum;
            firstNum = auxNum;
        } else {
            vet[qtdCont] = 1;
        }
    }

    //printf("%d", sizeof(vet));

    for(qtdCont = 0; qtdCont < qtdNum; qtdCont++) {
       printf("%d ", vet[qtdCont]);
    }


}
