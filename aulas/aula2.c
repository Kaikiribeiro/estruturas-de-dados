#include <stdio.h>
#include <stddef.h>

void exemplo1() {
    int numeros[] = {10, 20, 30, 40, 50};
    int *inicio = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Endereço: %p | Valor: %d\n", (void*)inicio, *inicio);
        inicio++;
    }

    printf("\n\n\n");

    for (int i = 0; i<5; i++) {
        printf("Endereço: %p | Valor: %d\n", &numeros, numeros[i]);
    }
}

void exemplo2() {
    int v[] = {100, 200, 300, 400, 500};
    int *inicio = v;

    int *terceiro = inicio + 2;
    printf("3 elemento %d\n", *terceiro);


    int *segundo = terceiro - 1;
    printf("2 elemento %d\n", *segundo);


    int *lixo = segundo + 5;
    printf("lixo %d\n", *lixo);

}

void exemplo3() {
    char texto[] = "Linguagem C";
    char *inicio = &texto[0];
    char *fim = &texto[9];

    ptrdiff_t distancia = fim - inicio;
    printf("Distancia entre ponteiros: %td elementos \n", distancia);

}

int main() {
    //exemplo1();
    //exemplo2();
    exemplo3();

    return 0;
}
