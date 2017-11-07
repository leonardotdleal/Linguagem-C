#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void main() {

    int *vet1 = malloc(MAX * sizeof(int));
    int *vet2 = malloc(MAX * sizeof(int));
    int *vet3 = malloc(MAX * sizeof(int));
    int returnbubbleSort1 = 0;

    // VETOR ORDENADO
    createArraySorted(vet1, MAX);
    returnbubbleSort1 = bubbleSort1(vet1, MAX);
    printf("\nVezes que passou: %d", returnbubbleSort1);

    // VETOR DESORDENADO
    createArrayUnsorted(vet2, MAX);
    returnbubbleSort1 = bubbleSort1(vet2, MAX);
    printf("\nVezes que passou: %d", returnbubbleSort1);

    // VETOR MAIS OU MENOS
    createArrayRandom(vet3, MAX);
    returnbubbleSort1 = bubbleSort1(vet3, MAX);
    printf("\nVezes que passou: %d", returnbubbleSort1);

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
