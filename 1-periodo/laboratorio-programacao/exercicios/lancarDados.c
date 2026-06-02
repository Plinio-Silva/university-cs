#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Plínio Tiago da Silva

int main(void)
{
    srand(time(NULL));

    int dado1 = rand() % 6 + 1;
    int dado2 = rand() % 6 + 1;
    int soma = dado1 + dado2;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Soma: %d\n", soma);

    if (soma == 7 || soma == 11) {
        printf("Vitória!\n");
    } else if (soma == 2 || soma == 3 || soma == 12) {
        printf("Derrota!\n");
    } else {
        printf("Ponto! Continue jogando\n");
    }
    getchar(); // Espera o usuário pressionar Enter antes de encerrar o programa
    return 0;
}
