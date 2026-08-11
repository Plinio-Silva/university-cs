#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    printf("\n\nDigite seu nome: ");
    fgets(nome, 50, stdin);
    // Remove o caractere de nova linha, se presente
    nome[strcspn(nome, "\n")] = 0;
    // Imprime as quatro primeiras letras do nome
    printf("As quatro primeiras letras do nome sao: ");
    for (int i = 0; i < 4 && nome[i] != '\0'; i++) {
        putchar(nome[i]);
    }
    printf("\n");
    getchar(); // Aguarda o usuário pressionar uma tecla antes de encerrar
    return 0;
}