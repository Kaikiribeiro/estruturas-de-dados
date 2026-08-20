#include <stdio.h>
#include <string.h>

int verificadorDePalidromo(char string[]) {
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho / 2; i++) {
        if (string[i] != string[tamanho - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palavraPalidromo[] = "arara";
    char palavraNaoPalidromo[] = "pao";

    if (verificadorDePalidromo(palavraPalidromo)) {
        printf("Palidromo detectado para: %s\n", palavraPalidromo);
    } else {
        printf("Não é palidromo: %s\n", palavraPalidromo);
    }

    if (verificadorDePalidromo(palavraNaoPalidromo)) {
        printf("Palidromo detectado para: %s\n", palavraNaoPalidromo);
    } else {
        printf("Não é palidromo: %s\n", palavraNaoPalidromo);
    }

    return 0;
}
