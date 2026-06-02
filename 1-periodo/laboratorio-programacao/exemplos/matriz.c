#include <stdio.h>
#include <locale.h>

 int main() {
        setlocale(LC_ALL, "Portuguese");
    int matriz[3][3];
    int  i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz digitada foi: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma dos elementos da matriz: %d\n", matriz[0][0] + matriz[0][1] + matriz[0][2] + 
                                               matriz[1][0] + matriz[1][1] + matriz[1][2] + 
                                               matriz[2][0] + matriz[2][1] + matriz[2][2]);

    printf("Soma dos elementos da diagonal principal: %d\n", matriz[0][0] + matriz[1][1] + matriz[2][2]);

    printf("soma dos  eelementos da diagonal secundária: %d\n", matriz[0][2] + matriz[1][1] + matriz[2][0]);

    printf("Soma dos elementos da primeira linha: %d\n", matriz[0][0] + matriz[0][1] + matriz[0][2]);
    printf("Soma dos elementos da segunda linha: %d\n", matriz[1][0] + matriz[1][1] + matriz[1][2]);
    printf("Soma dos elementos da terceira linha: %d\n", matriz[2][0] + matriz[2][1] + matriz[2][2]);

    printf("Soma dos elementos da primeira coluna: %d\n", matriz[0][0] + matriz[1][0] + matriz[2][0]);
    printf("soma dos elementos da segunda coluna: %d\n", matriz[0][1] + matriz[1][1] + matriz[2][1]);
    printf("soma dos elementos da terceira coluna: %d\n", matriz[0][2] + matriz[1][2] + matriz[2][2]);

    printf("Média dos elementos da matriz: %.2f\n", (matriz[0][0] + matriz[0][1] + matriz[0][2] + 
                                               matriz[1][0] + matriz[1][1] + matriz[1][2] + 
                                               matriz[2][0] + matriz[2][1] + matriz[2][2]) / 9.0);

    getchar();
    getchar();
    return 0;
 }