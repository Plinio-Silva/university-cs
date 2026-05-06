// Plínio Tiago da Silva

/*
 * Objetivo do programa:
 * Este programa verifica se um funcionário pode acessar a área de carga com base em duas condições:
 * 1. Se o funcionário tem o crachá de identificação (representado por 1).
 * 2. Se não há um alerta de segurança ativo (representado por 0).
 * O programa solicita ao usuário os valores dessas condições e decide se o acesso é permitido.
 */

#include <stdio.h>

int main() {
    // Declaração das variáveis
    // temCracha: indica se o funcionário possui o crachá de identificação.
    // 1 significa sim (possui), 0 significa não.
    // Usamos int para representar valores booleanos (0 ou 1).
    int temCracha;

    // alertaSeguranca: indica se há um alerta de segurança ativo.
    // 1 significa ativo, 0 significa inativo.
    // Usamos int para representar valores booleanos (0 ou 1).
    int alertaSeguranca;

    // Solicita ao usuário se possui crachá
    // Usamos printf para exibir uma mensagem pedindo a entrada.
    printf("Digite 1 se possui cracha ou 0 se nao possui: ");

    // Lê a entrada do usuário e armazena em temCracha
    // scanf lê um int (%d) da entrada padrão (teclado).
    scanf("%d", &temCracha);

    // Solicita ao usuário se há alerta de segurança
    // 1 para ativo, 0 para inativo.
    printf("Digite 1 se alerta de seguranca ativo ou 0 se inativo: ");

    // Lê a entrada e armazena em alertaSeguranca
    scanf("%d", &alertaSeguranca);

    // Lógica de decisão
    // Usamos o operador && (E lógico) e ! (negação) para verificar ambas as condições:
    // - temCracha: verifica se é 1 (possui crachá).
    // - !alertaSeguranca: o operador ! inverte o valor, então se alertaSeguranca for 0, !0 é 1 (verdadeiro).
    // Se ambas forem verdadeiras, o acesso é permitido.
    if (temCracha && !alertaSeguranca) {
        // Imprime a permissão se as condições forem atendidas
        printf("Acesso Permitido\n");
    } else {
        // Caso contrário, o acesso é negado
        // Incluído para completude, embora a atividade não especifique.
        printf("Acesso Negado\n");
    }

    // Pausa para o usuario pressionar ENTER antes de sair
    printf("Pressione ENTER para sair...");
    getchar();
    getchar();

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}