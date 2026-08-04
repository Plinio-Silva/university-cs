#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    printf("\n\nDigite seu nome: ");
    fgets(nome, 50, stdin);
    // Remove o caractere de nova linha, se presente

    if( nome[0] == 'a' || nome[0] == 'A') {
        printf("Seu nome começa com a letra A.\n");
    } else {
        printf("Seu nome não começa com a letra A.\n");
    }

    nome[strcspn(nome, "\n")] = 0;
    printf("A primeira letra do seu nome é: %c\n", nome[0]);

    getchar(); // Aguarda o usuário pressionar uma tecla antes de encerrar

    return 0;
}