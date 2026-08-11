#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char string[50];

    printf("Digite seu nome: ");

    fgets(string, 50, stdin);

    printf("\nVoce digitou ");

    puts(string);

    getchar();
    getchar();

    return 0;
}