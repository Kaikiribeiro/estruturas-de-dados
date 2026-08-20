#include <stdio.h>

void combinarArray(int v1[], int v2[], int v3[], int tam) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < tam && j < tam) {
        if (v1[i] < v2[j]) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < tam) {
        v3[k] = v1[i];
        i++;
        k++;
    }

    while (j < tam) {
        v3[k] = v2[j];
        j++;
        k++;
    }
}

int main() {
    int v1[] = {2, 4, 6, 8, 10};
    int v2[] = {1, 3, 5, 7, 9};
    int v3[10];

    combinarArray(v1, v2, v3, 5);

    printf("Vetor combinado e ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
