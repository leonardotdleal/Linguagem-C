
void insertionSort(int *v, int size) {
    int i, j, pivo, numPassed = 0;

    for (i = 1; i < size; i++) {
        pivo = v[i];
        j = i - 1;

        while (j >= 0 && pivo < v[j]) {
            v[j + 1] = v[j];
            j--;
            numPassed++;
        }

        v[j + 1] = pivo;
    }
    return numPassed;
}
