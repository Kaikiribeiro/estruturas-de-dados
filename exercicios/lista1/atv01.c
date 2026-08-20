#include <stdio.h>

int somaArray(int a[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += a[i];
    }
    return soma;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int tamanho = sizeof(a) / sizeof(a[0]);

    printf("Tamanho: %d\n", tamanho);
    printf("Soma: %d\n", somaArray(a, tamanho));

    return 0;
}
