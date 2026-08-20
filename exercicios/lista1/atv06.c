#include<stdio.h>

int filterNumerosPares(int array[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] % 2 == 0) {
            array[contador] = array[i];
            contador++;
        }
    }
    return contador;
}


int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho = sizeof(array) / sizeof(array[0]);

    int tamanhoNovo = filterNumerosPares(array, tamanho);

    for (int i = 0; i < tamanhoNovo; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}