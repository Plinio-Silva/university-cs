#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    printf("\n\nDigite seu nome: ");
    if (fgets(nome, sizeof(nome), stdin) != NULL) {
        size_t len = strlen(nome);
        if (len > 0 && nome[len - 1] == '\n') {
            nome[len - 1] = '\0';
            len--;
        }

        printf("\nAs primeiras letras do nome sao: ");
        for (size_t i = 0; i < len && i < 4; i++) {
            putchar(nome[i]);
        }
        printf("\n");
    }
    getchar(); // Aguarda o usuário pressionar uma tecla antes de encerrar
    return 0;
}