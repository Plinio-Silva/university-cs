#include <stdio.h>

int main() {
    int idade;
    int temConvite;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Possui convite? (1 para sim, 0 para nao): ");
    scanf("%d", &temConvite);

    if (idade >= 18 && temConvite == 1) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    printf("Pressione ENTER para sair...");
getchar();
getchar();


    return 0;
}