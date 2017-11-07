#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void main() {

    int *vet1 = malloc(MAX * sizeof(int));
    int *vet2 = malloc(MAX * sizeof(int));
    int *vet3 = malloc(MAX * sizeof(int));
    int ret1 = 0, ret2 = 0, ret3 = 0;

    printf("### INSERTION SORT ###\n");

    // VETOR ORDENADO
    createArraySorted(vet1, MAX);
    ret1 = insertionSort(vet1, MAX);
    printf("\nVezes que passou: %d", ret1);

    // VETOR DESORDENADO
    createArrayUnsorted(vet2, MAX);
    ret2 = insertionSort(vet2, MAX);
    printf("\nVezes que passou: %d", ret2);

    // VETOR MAIS OU MENOS
    createArrayRandom(vet3, MAX);
    ret3 = insertionSort(vet3, MAX);
    printf("\nVezes que passou: %d", ret3);

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
