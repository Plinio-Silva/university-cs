#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char string[50];

    printf("Digite seu nome: ");

    fgets(string, 50, stdin);

    printf("\n\n Voce digitou: %s", string);

    getchar();
    getchar();

    return 0;
}