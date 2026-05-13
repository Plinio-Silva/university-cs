#include <stdio.h>   // Biblioteca padrão de entrada e saída, usada para printf e scanf
#include <locale.h>  // Biblioteca para configurar informações de localização, como acentos e idioma

// Função que recebe dois números e retorna a soma deles
float somar(float num1, float num2) {
    return num1 + num2; // Retorna o resultado da soma entre num1 e num2
}

int main() {
    // Configura a localidade para Português, permitindo uso correto de acentos e mensagens regionais
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, resultado; // Declaração de variáveis do tipo float para armazenar os números e o resultado

    // Pede ao usuário o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%f", &num1); // Lê um número decimal e guarda em num1

    // Pede ao usuário o segundo número
    printf("Digite o segundo número: ");
    scanf("%f", &num2); // Lê um número decimal e guarda em num2

    // Chama a função somar passando os dois valores e armazena o resultado
    resultado = somar(num1, num2);

    // Exibe o resultado da soma formatado com duas casas decimais
    printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);

    // Aguarda duas entradas de tecla para não fechar imediatamente em alguns terminais
    getchar();
    getchar();
    
    return 0; // Indica que o programa terminou com sucesso
}