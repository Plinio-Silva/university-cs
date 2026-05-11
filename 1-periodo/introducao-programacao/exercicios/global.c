#include <stdio.h>
#include <locale.h>

int global = 10;

void funcao() {
    printf("\n\nValor da variável global dentro da função: %d\n", global);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Valor da variável global: %d\n", global);

    global = 20; // Modificando o valor da variável global
    funcao();

    getchar(); // Aguarda o usuário pressionar Enter antes de encerrar o programa
    return 0;
}