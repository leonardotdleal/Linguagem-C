#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void main() {

    int *vet1 = malloc(MAX * sizeof(int));
    int *vet2 = malloc(MAX * sizeof(int));
    int *vet3 = malloc(MAX * sizeof(int));
    int returnBubbleSort = 0;

    // VETOR ORDENADO
    createArraySorted(vet1, MAX);
    returnBubbleSort = bubbleSort(vet1, MAX);
    printf("\nVezes que passou: %d", returnBubbleSort);

    // VETOR DESORDENADO
    createArrayUnsorted(vet2, MAX);
    returnBubbleSort = bubbleSort(vet2, MAX);
    printf("\nVezes que passou: %d", returnBubbleSort);

    // VETOR MAIS OU MENOS
    createArrayRandom(vet3, MAX);
    returnBubbleSort = bubbleSort(vet3, MAX);
    printf("\nVezes que passou: %d", returnBubbleSort);

}

int bubbleSort(int *vetor, int size) {
    int i, aux, passed, numPassed = 0;

    do {
        passed = 0;

        for(i = 0; i < size - 1; i++) {
            //printf("\nvet: %d", vetor[i]);
            if (vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                passed = 1;
                numPassed++;
            }
        }
    } while(passed);

    return numPassed;
}

void createArraySorted(int *vetor, int size) {
    int i;
    for (i = 0; i < size; i++)
        vetor[i] = i;
}

void createArrayUnsorted(int *vetor, int size) {
    int i;
    for (i = 0; i < size; i++)
        vetor[i] = size - i;
}

void createArrayRandom(int *vetor, int size) {
    int i;
    for (i = 0; i < size; i++)
        vetor[i] = rand();
}
