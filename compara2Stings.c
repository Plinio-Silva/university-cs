#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char s1[50] , s2[50];
    int igual = 1;

    printf("\n\nDigite s1: ");
    fgets(s1, 50, stdin);
    printf("\n\nDigite s2: ");
    fgets(s2, 50, stdin);

    for( int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if(s1[i] != s2[i]) {
            igual = 0;
            break;
        }
    }

    if(igual) {
        printf("\nAs strings sao iguais.\n");
    } else {
        printf("\nAs strings sao diferentes.\n");
    }

    getchar (); // Aguarda o usuário pressionar uma tecla antes de encerrar

    return 0;
}