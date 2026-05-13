#include <stdio.h>   // Biblioteca padrão de entrada e saída, usada para printf e scanf
#include <locale.h>  // Biblioteca para configurar informações de localização, como acentos e idioma   

// Função que recebe dois números e retorna a soma deles
float somar(float num1, float num2) {
    return num1 + num2; // Retorna o resultado da soma entre num1 e num2
}

int pegarNumero() {
    float numero; // Declaração de uma variável do tipo float para armazenar o número digitado pelo usuário

    // Pede ao usuário para digitar um número
    printf("Digite um número: ");
    scanf("%f", &numero); // Lê um número decimal e guarda em numero

    return numero; // Retorna o número digitado pelo usuário
}

int main() {
    // Configura a localidade para Português, permitindo uso correto de acentos e mensagens regionais
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, resultado; // Declaração de variáveis do tipo float para armazenar os números e o resultado

    // Chama a função pegarNumero para obter o primeiro número do usuário
    num1 = pegarNumero();

    // Chama a função pegarNumero novamente para obter o segundo número do usuário
    num2 = pegarNumero();

    // Chama a função somar passando os dois valores e armazena o resultado
    resultado = somar(num1, num2);

    // Exibe o resultado da soma formatado com duas casas decimais
    printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);

    // Aguarda duas entradas de tecla para não fechar imediatamente em alguns terminais
    getchar();
    getchar();
    
    return 0; // Indica que o programa terminou com sucesso
}