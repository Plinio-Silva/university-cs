#include <stdio.h>
#include <locale.h>

char name[30];

void cumprimentar() {
    printf("\n\n\tBom dia Sr(a). %s, seja bem-vindo(a)!\n", name);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite seu nome: ");
    //scanf("%s", name);
    gets(name); // Lê o nome do usuário, incluindo espaços
    cumprimentar();

    getchar(); // Aguarda o usuário pressionar Enter antes de fechar o programa
    getchar();
    return 0;
}