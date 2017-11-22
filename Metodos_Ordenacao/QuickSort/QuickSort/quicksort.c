
void quickSort(int *vetor, int esq, int dir) {
    if (esq < dir) {
        int pivo = dividir(vetor, esq, dir);

        quickSort(vetor, esq, pivo - 1);
        quickSort(vetor, pivo + 1, dir);
    }
}

int dividir(int *vetor, int esq, int dir) {
    int pivo = vetor[dir];
    int i = (esq - 1);

    for (int j = esq; j <= dir- 1; j++) {
        if (vetor[j] <= pivo) {
            i++;
            troca(&vetor[i], &vetor[j]);
        }
    }

    troca(&vetor[i + 1], &vetor[dir]);
    return (i + 1);
}

void troca(int* esq, int* dir) {
    int aux = *esq;
    *esq = *dir;
    *dir = aux;
}
