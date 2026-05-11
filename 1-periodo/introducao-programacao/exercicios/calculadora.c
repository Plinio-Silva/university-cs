#include <stdio.h>
#include <locale.h>

void somar(float num1, float num2) {
    printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
}

void subtrair(float num1, float num2) {
    printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}

void multiplicar(float num1, float num2) {
    printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
}

void dividir(float num1, float num2) {
    if (num2 != 0) {
        printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n========== CALCULADORA ==========\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        printf("================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (opcao) {
            case 1:
                somar(num1, num2);
                break;
            case 2:
                subtrair(num1, num2);
                break;
            case 3:
                multiplicar(num1, num2);
                break;
            case 4:
                dividir(num1, num2);
                break;
        }
    } while (1);

    getchar(); // Aguarda o usuário pressionar Enter antes de encerrar o programa
    getchar();

    return 0;
}