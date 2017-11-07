
int bubbleSort1(int *v, int size) {
    int i, j, aux, numPassed = 0;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                numPassed++;
            }
        }
    }
    return numPassed;
}

int bubbleSort2(int *vetor, int size) {
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
