#include <stdio.h>

//Plínio Tiago da Silva

void exibirTabuleiro(char tabuleiro[3][3])
{
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

int verificarVitoria(char tabuleiro[3][3], char jogador)
{
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) {
            return 1;
        }
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) {
            return 1;
        }
    }

    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) {
        return 1;
    }
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) {
        return 1;
    }

    return 0;
}

int main(void)
{
    char tabuleiro[3][3];
    char jogador = 'X';
    int linha, coluna;
    int movimentos = 0;
    int venceu = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    printf("Bem-vindo ao Jogo da Velha!\n");

    while (movimentos < 9 && !venceu) {
        exibirTabuleiro(tabuleiro);
        printf("Jogador %c, digite a linha e a coluna (0-2): ", jogador);

        if (scanf("%d %d", &linha, &coluna) != 2) {
            printf("Entrada inválida. Use dois números entre 0 e 2.\n");
            while (getchar() != '\n') {
                ;
            }
            continue;
        }

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posição inválida. Tente novamente.\n");
            continue;
        }

        if (tabuleiro[linha][coluna] != ' ') {
            printf("Esta posição já está ocupada. Tente outra.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        movimentos++;

        if (verificarVitoria(tabuleiro, jogador)) {
            venceu = 1;
            break;
        }

        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    exibirTabuleiro(tabuleiro);

    if (venceu) {
        printf("Jogador %c venceu!\n", jogador);
    } else {
        printf("Empate! Ninguém venceu.\n");
    }
    getchar(); // Espera o usuário pressionar Enter antes de encerrar o programa
    return 0;
}
