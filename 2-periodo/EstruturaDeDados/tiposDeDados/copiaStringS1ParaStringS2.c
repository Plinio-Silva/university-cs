#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Define o idioma para mensagens e acentuação no terminal

    int i; // Índice usado para percorrer os caracteres da string
    char s1[20], s2[20]; // Duas strings com até 19 caracteres + '\0'

    printf("\n\n Digite s1: "); // Mostra a mensagem pedindo a string
    fgets(s1, 20, stdin); // Lê a string digitada pelo usuário em s1

    // Copia cada caractere de s1 para s2 até encontrar o final da string
    for(i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];

    s2[i] = '\0'; // Marca o fim da string em s2

    printf("\n s1 = %s", s1); // Exibe a string original
    printf("\n s2 = %s", s2); // Exibe a string copiada

    getchar(); // Aguarda uma tecla antes de fechar
    getchar(); // Consome o '\n' que ficou no buffer após fgets

    return 0; // Encerra o programa
}