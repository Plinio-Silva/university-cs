# include <stdio.h>
# include <locale.h>

// o programa abaixo irá calcular dois número pedodos do usuário com as quatro operações aritiméticas básicas e terá um menu de opções para o usuário escolher qual operação deseja realizar.
// Iremos usar void somar e assim para os demais, para que o programa fique mais organizado e fácil de entender.

void somar(float num1, float num2) {
    float resultado = num1 + num2;
    printf("O resultado da soma: %.2f + %.2f = %.2f\n", num1, num2, resultado);
}

void subtrair(float num1, float num2) {
    float resultado = num1 - num2;
    printf("O resultado da subtracao: %.2f - %.2f = %.2f\n", num1, num2, resultado);
}

void multiplicar(float num1, float num2) {
    float resultado = num1 * num2;
    printf("O resultado da multiplicação: %.2f × %.2f = %.2f\n", num1, num2, resultado);
}

void dividir(float num1, float num2) {
    if (num2 == 0) {
        printf("Erro: Divisao por zero nao e permitida!\n");
    } else {
        float resultado = num1 / num2;
        printf("O resultado da divisao: %.2f ÷ %.2f = %.2f\n", num1, num2, resultado);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;
    int opcao;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Escolha a operacao desejda:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
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
        default:
            printf("Opcao invalida!\n");
    }

    getchar(); // Para manter a tela aberta até que o usuário pressione uma tecla
    getchar();

    return 0;
}