// Plínio Tiago da Silva

/*
 * Objetivo do programa:
 * Este programa simula um sensor de estacionamento inteligente que verifica duas condições de perigo:
 * 1. Se a distância do carro a um obstáculo é menor que 50 cm.
 * 2. Se há movimento detectado (representado por 1).
 * Se qualquer uma das condições for verdadeira, o programa emite um alerta para parar.
 * O programa solicita ao usuário os valores dessas condições e decide se deve alertar.
 */

#include <stdio.h>

int main() {
    // Declaração das variáveis
    // distancia: armazena a distância medida pelo sensor em centímetros.
    // É um número de ponto flutuante para permitir medições precisas.
    float distancia;

    // movimentoDetectado: indica se há movimento detectado pelo sensor.
    // 0 significa nenhum movimento, 1 significa movimento detectado.
    // Usamos int para representar valores booleanos (0 ou 1).
    int movimentoDetectado;

    // Solicita ao usuário a distância medida
    // Usamos printf para exibir uma mensagem pedindo a entrada.
    printf("Digite a distancia em cm: ");

    // Lê a entrada do usuário e armazena em distancia
    // scanf lê um float (%f) da entrada padrão (teclado).
    scanf("%f", &distancia);

    // Solicita ao usuário se há movimento detectado
    // 0 para nenhum movimento, 1 para movimento detectado.
    printf("Digite 0 se nenhum movimento ou 1 se movimento detectado: ");

    // Lê a entrada e armazena em movimentoDetectado
    scanf("%d", &movimentoDetectado);

    // Lógica de decisão
    // Usamos o operador || (OU lógico) para verificar se pelo menos uma condição é verdadeira:
    // - distancia < 50.0: verifica se a distância é menor que 50 cm.
    // - movimentoDetectado: verifica se é 1 (movimento detectado).
    // Se qualquer uma for verdadeira, há perigo e deve alertar.
    if (distancia < 50.0 || movimentoDetectado) {
        // Imprime o alerta se o perigo for detectado
        printf("ALERTA: PARE!\n");
    } else {
        // Caso contrário, está seguro
        // Incluído para completude, embora a atividade não especifique.
        printf("Seguro para prosseguir.\n");
    }

    // Pausa para o usuario pressionar ENTER antes de sair
    printf("Pressione ENTER para sair...");
    getchar();
    getchar();

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}