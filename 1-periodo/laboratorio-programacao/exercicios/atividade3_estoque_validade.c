// Plínio Tiago da Silva

/*
 * Objetivo do programa:
 * Este programa verifica se um produto está pronto para venda com base em duas condições:
 * 1. Se há unidades disponíveis no estoque (quantidadeEstoque > 0).
 * 2. Se a validade do produto não está vencida (validadeVencida == 0).
 * O programa solicita ao usuário os valores dessas condições e decide se o produto pode ser vendido.
 */

#include <stdio.h>

int main() {
    // Declaração das variáveis
    // quantidadeEstoque: armazena a quantidade de unidades do produto em estoque.
    // É um número inteiro que representa quantas unidades estão disponíveis.
    int quantidadeEstoque;

    // validadeVencida: indica se a validade do produto está vencida.
    // 0 significa que a validade está ok (não vencida), 1 significa vencida.
    // Usamos int para representar valores booleanos (0 ou 1).
    int validadeVencida;

    // Solicita ao usuário a quantidade em estoque
    // Usamos printf para exibir uma mensagem pedindo a entrada.
    printf("Digite a quantidade em estoque: ");

    // Lê a entrada do usuário e armazena em quantidadeEstoque
    // scanf lê um inteiro (%d) da entrada padrão (teclado).
    scanf("%d", &quantidadeEstoque);

    // Solicita ao usuário se a validade está vencida
    // 0 para não vencida, 1 para vencida.
    printf("Digite 0 se a validade nao esta vencida ou 1 se esta vencida: ");

    // Lê a entrada e armazena em validadeVencida
    scanf("%d", &validadeVencida);

    // Lógica de decisão
    // Usamos o operador && (E lógico) para verificar ambas as condições:
    // - quantidadeEstoque > 0: verifica se há pelo menos uma unidade em estoque.
    // - !validadeVencida: o operador ! (negação) inverte o valor, então se validadeVencida for 0, !0 é 1 (verdadeiro).
    // Se ambas forem verdadeiras, o produto está pronto para venda.
    if (quantidadeEstoque > 0 && !validadeVencida) {
        // Imprime a mensagem se as condições forem atendidas
        printf("Produto Pronto para Venda\n");
    } else {
        // Caso contrário, o produto não está pronto
        // Embora a atividade não especifique, é bom incluir para completude.
        printf("Produto Nao Pronto para Venda\n");
    }

    // Pausa para o usuario pressionar ENTER antes de sair
    printf("Pressione ENTER para sair...");
    getchar();
    getchar();

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}