#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    char s1[50]; int cont = 0;

    printf("\n\nDigite a string: ");
    fgets(s1, 50, stdin);

    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] == '0') {
            s1[i] = '1'; // Substitui '0' por '1'
            cont++;
        }
    }
    printf("A quantidade de vezes que o número 0 foi substituído por 1 na string é: %d", cont);
    printf("\nString resultante: %s", s1);

    getchar(); // Wait for user input before closing the program
    return 0;
}