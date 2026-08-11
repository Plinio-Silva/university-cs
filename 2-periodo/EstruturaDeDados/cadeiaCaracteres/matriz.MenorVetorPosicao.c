#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int matriz [3] [3], i, j, menor, posicao;

    printf("\n\n===== Inserindo dados no matirz =====\n\n");

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("\n Digite o elemento de indice [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];
    posicao = 0;

    printf("\n\n===== Mostrando os dados da matriz =====\n\n");

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n"); // Quebra a linha a cada linha da matriz
    }

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                posicao = i * 3 + j; // Calcula a posição linear do menor elemento
            }
        }
    }

    printf("\n\n O menor elemento da matriz: %d", menor);
    printf("\n A posicao do menor elemento na matriz: [%d][%d]", posicao / 3, posicao % 3); // Converte a posição linear de volta para índices de linha e coluna

        getchar(); // Limpa o buffer do teclado
        getchar(); // Pausa o programa para o usuário ver os resultados

    return 0;
}