# include <stdio.h>
# include <locale.h>
# include <string.h>
# include <stdlib.h>

int main() {
    setlocale(LC_ALL, ".utf8");
    char nome[50];
    printf("Digite o nome: ");
    fgets(nome, 50, stdin);
    // Remove the newline character from the end of the string
    nome[strcspn(nome, "\n")] = 0;
    printf("O nome digitado foi: %s\n", nome);
    system("pause");
    return 0;
}

