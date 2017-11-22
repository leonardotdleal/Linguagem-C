#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define INIT 0
#define FINAL 9


void main() {

    int *vet1 = malloc(MAX * sizeof(int));
    int *vet2 = malloc(MAX * sizeof(int));
    int *vet3 = malloc(MAX * sizeof(int));

    printf("### QUICK SORT ###\n");

    // VETOR ORDENADO
    createArraySorted(vet1, MAX);
    printArray(vet1);
    quickSort(vet1, vet1[INIT], vet1[FINAL]);
    printArray(vet1);
    //printf("\nVezes que passou: %d\n", returnQuickSort1);

    // VETOR DESORDENADO
    createArrayUnsorted(vet2, MAX);
    printArray(vet2);
    quickSort(vet2, vet2[FINAL], vet2[INIT]);
    printArray(vet2);
    //printf("\nVezes que passou: %d\n", returnQuickSort2);

    // VETOR MAIS OU MENOS
    createArrayRandom(vet3, MAX);
    printArray(vet3);
    quickSort(vet3, INIT, FINAL);
    printArray(vet3);
    //printf("\nVezes que passou: %d\n", returnQuickSort3);

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

/* Function to print an array */
void printArray(int *vetor){
    int i;
    printf("\nArray: ");

    for (i=0; i < MAX; i++)
        printf("%d ", vetor[i]);

    printf("\n");
}
