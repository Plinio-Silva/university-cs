// Plínio Tiago da Silva

/*
 * Objetivo do programa:
 * Este programa verifica se um cliente pode ter um empréstimo bancário aprovado com base em duas condições:
 * 1. Se a renda mensal é superior a R$ 3.000,00.
 * 2. Se o cliente não possui restrições no nome (nome limpo, representado por 0).
 * O programa solicita ao usuário os valores dessas condições e decide se o empréstimo é aprovado.
 */

#include <stdio.h>

int main() {
    // Declaração das variáveis
    // rendaMensal: armazena a renda mensal do cliente em reais.
    // É um número de ponto flutuante para permitir valores decimais.
    float rendaMensal;

    // possuiRestricao: indica se o cliente possui restrições no nome.
    // 0 significa nome limpo (sem restrição), 1 significa possui restrição.
    // Usamos int para representar valores booleanos (0 ou 1).
    int possuiRestricao;

    // Solicita ao usuário a renda mensal
    // Usamos printf para exibir uma mensagem pedindo a entrada.
    printf("Digite a renda mensal em R$: ");

    // Lê a entrada do usuário e armazena em rendaMensal
    // scanf lê um float (%f) da entrada padrão (teclado).
    scanf("%f", &rendaMensal);

    // Solicita ao usuário se possui restrição
    // 0 para nome limpo, 1 para possui restrição.
    printf("Digite 0 se nome limpo ou 1 se possui restricao: ");

    // Lê a entrada e armazena em possuiRestricao
    scanf("%d", &possuiRestricao);

    // Lógica de decisão
    // Usamos o operador && (E lógico) e ! (negação) para verificar ambas as condições:
    // - rendaMensal > 3000.0: verifica se a renda é superior a R$ 3.000,00.
    // - !possuiRestricao: o operador ! inverte o valor, então se possuiRestricao for 0, !0 é 1 (verdadeiro).
    // Se ambas forem verdadeiras, o empréstimo é aprovado.
    if (rendaMensal > 3000.0 && !possuiRestricao) {
        // Imprime a aprovação se as condições forem atendidas
        printf("Empréstimo Aprovado\n");
    } else {
        // Caso contrário, o empréstimo é reprovado
        // Incluído para completude, embora a atividade não especifique.
        printf("Empréstimo Reprovado\n");
    }

    // Pausa para o usuario pressionar ENTER antes de sair
    printf("Pressione ENTER para sair...");
    getchar();
    getchar();

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}