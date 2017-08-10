#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaMedia(int *vet);
float calculaVariancia(int *vet, float media);

void main() {

    int qtdNum = 0,
        i = 1,
        *vet;

    float media = 0,
          variancia = 0;

    printf("Digite a quantidade de notas desejados:");
    scanf("%d", &qtdNum);

    vet = malloc(qtdNum * sizeof(int));
    vet[0] = qtdNum;

    for(i = 1; i <= qtdNum; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%d", &vet[i]);
    }

    media = calculaMedia(vet);
    variancia = calculaVariancia(vet, media);

    printf("\nMedia: %0.2f", media);
    printf("\nVariancia: %0.2f", variancia);

}

float calculaMedia(int *vet) {
    int i = 0;
    float media = 0;

    for (i = 1; i <= vet[0]; i++)
        media = media + vet[i];

    media = media / vet[0];
    return media;
}

float calculaVariancia(int *vet, float media) {
    int i = 0;
    float variancia = 0;

    for(i = 1; i <= vet[0]; i++)
        variancia += (vet[i]-media)*(vet[i]-media);

    variancia = variancia / vet[0];
    return variancia;
}




