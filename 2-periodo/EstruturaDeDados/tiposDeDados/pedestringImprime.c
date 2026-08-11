#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char string[20];

    printf("\n\n Digite seu nome: ");

    scanf("%s", string);

    printf("\n\n voce digitou: %s", string);

    getchar();
    getchar();

    return 0;
}