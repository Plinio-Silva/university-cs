#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char s1[50]; int cont = 0;

    printf("\n\nDigite a string: ");
    fgets(s1, 50, stdin);

    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] == '1') {
            cont++;
        }
    }
    printf("A quantidade de vezes que o número 1 aparece na string é: %d", cont);

    getchar(); // Wait for user input before closing the program
    return 0;
}