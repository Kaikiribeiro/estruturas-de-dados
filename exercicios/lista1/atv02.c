#include <stdio.h>

int verificadorDePalidromo(char string[]) {

}


int main() {
    char palavraPalidromo[] = "arara";
    char palavraNaoPalidromo[] = "pao";

    if (verificadorDePalidromo(palavraPalidromo)) {
        printf("Palidromo detectado");
    } else {
        printf("Não é palidromo");
    }

    if (verificadorDePalidromo(palavraNaoPalidromo)) {
        printf("Palidromo detectado");
    } else {
        printf("Não é palidromo");
    }

    return 0;
}