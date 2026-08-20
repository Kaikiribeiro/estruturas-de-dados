#include <stdio.h>
#include <string.h>

int contadorDeVogais(char palavra[]) {
    int tamanho = strlen(palavra);
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' ||palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            contador++;
        }

        if (palavra[i] == 'A' || palavra[i] == 'E' ||palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            contador++;
        }
    }

    return  contador;
}

int main() {


    printf("%d", contadorDeVogais("UaIuAi"));
    return 0;
}