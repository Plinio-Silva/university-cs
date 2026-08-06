#include <stdio.h>

int main() {

    int linha = 0;

    while (linha < 10) {
        if(linha == 0)printf("          __\n");
        else if(linha == 1)printf("         / _)\n");
        else if(linha == 2)printf("  .-^^^-/ /\n");
        else if(linha == 3)printf("   __--/      /\n");
        else if(linha == 4)printf(" <_|_|---|_|\n");
        else if(linha == 5)printf("    ||    ||\n");
        else if(linha == 6)printf("    ^^    ^^\n");
        else if(linha == 7)printf("\n");
        else if(linha == 8)printf("    \n");
        else if(linha == 9)printf("    \n");
        linha++;
    }   
    // Pausa para o usuario pressionar ENTER antes de sair
    printf("Pressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
