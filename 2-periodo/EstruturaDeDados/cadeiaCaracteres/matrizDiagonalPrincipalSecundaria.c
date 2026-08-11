#include <stdio.h>

int main() {
    int matriz[3][3], i, j, diagonalPrincipal = 0, diagonalsecundaria = 0;

    printf("\n\n===== Inserindo dados na matriz =====\n\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("\n digite o indice da matriz [%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\n===== Mostrando os dados da matriz =====\n\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < 3; i++) {
        diagonalPrincipal += matriz[i][i]; // Soma os elementos da diagonal principal
        diagonalsecundaria += matriz[i][2 - i]; // Soma os elementos da diagonal secundária
    }

    printf("\n\n A soma da diagonal principal: %d", diagonalPrincipal);
    printf("\n A soma da diagonal secundária: %d", diagonalsecundaria);

    getchar(); // limpa o buffer do teclado
    getchar(); // pausa o programa para o usuário ver os resultados

    return 0;
}