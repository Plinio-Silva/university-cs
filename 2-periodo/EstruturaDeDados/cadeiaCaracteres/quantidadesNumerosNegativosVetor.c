#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, contador = 0;
    int numeros[10];


    printf("\n\n====== Inserindo dados no vetor ======\n\n");
    for ( i = 0; i < 10; i++) {
        printf("\n Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            contador++;
        }
    }

    printf("\n\n====== Mostrando o contédo do vetor ======\n\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\n Quantidades de números negativos: %d", contador);

    getchar();
    getchar();

    return 0;
}