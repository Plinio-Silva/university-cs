#include <stdio.h>
#include <locale.h>

int global = 10;

void funcao() {
    printf("\n\nValor da variável global dentro da função: %d\n", global);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a = 20;
    printf("Valor da variável local: %d\n", a);
    printf("Valor da variável global: %d\n", global);

    global = 5; // Modificando o valor da variável global
    funcao();

    printf("Valor da variável global após modificação: %d\n", global);

    getchar(); // Aguarda o usuário pressionar Enter antes de encerrar o programa
    return 0;
}