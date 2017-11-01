#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void main() {

    int *vet = malloc(MAX * sizeof(int));
    int returnBubbleSort = 0;

    // VETOR ORDENADO
    createArraySorted(vet, MAX);
    returnBubbleSort = bubbleSort(vet, MAX);
    printf("\nVezes que passou: %d", returnBubbleSort);

    // VETOR DESORDENADO
    createArrayUnsorted(vet, MAX);
    returnBubbleSort = bubbleSort(vet, MAX);
    printf("\nVezes que passou: %d", returnBubbleSort);

    // VETOR MAIS OU MENOS
    createArrayRandom(vet, MAX);
    returnBubbleSort = bubbleSort(vet, MAX);
    printf("\nVezes que passou: %d", returnBubbleSort);

}

int bubbleSort(int *vet, int size) {
    int i, j, aux, passed, numPassed = 0;

    do {
        passed = 0;

        for(i = 0; i < size - 1; i++) {
            //printf("\nvet: %d", vet[i]);
            if (vet[i] > vet[i + 1]) {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
                passed = 1;
                numPassed++;
            }
        }
    } while(passed);

    return numPassed;
}

void createArraySorted(int *vet, int size) {
    int i;
    for (i = 0; i < size; i++)
        vet[i] = i;
}

void createArrayUnsorted(int *vet, int size) {
    int i;
    for (i = 0; i < size; i++)
        vet[i] = size - i;
}

void createArrayRandom(int *vet, int size) {
    int i;
    for (i = 0; i < size; i++)
        vet[i] = rand();
}
