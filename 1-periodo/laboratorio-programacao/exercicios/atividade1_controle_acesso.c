/* Código de Plínio Tiago da Silva */

/* Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf */
#include <stdio.h>

/* Função principal do programa */
int main() {
    /* Declara variáveis para armazenar a idade e se possui convite */
    int idade;
    int temConvite;

    /* Solicita ao usuário que digite sua idade */
    printf("Digite sua idade: ");
    /* Lê a idade digitada pelo usuário */
    scanf("%d", &idade);

    /* Pergunta se o usuário possui convite */
    printf("Possui convite? (1 para sim, 0 para nao): ");
    /* Lê a resposta sobre o convite */
    scanf("%d", &temConvite);

    /* Verifica se a idade é maior ou igual a 18 e se possui convite */
    if (idade >= 18 && temConvite == 1) {
        /* Se as condições forem atendidas, permite o acesso */
        printf("Acesso permitido.\n");
    } else {
        /* Caso contrário, nega o acesso */
        printf("Acesso negado.\n");
    }

    /* Mensagem para o usuário pressionar ENTER para sair */
    printf("Pressione ENTER para sair...");
    /* Aguarda o usuário pressionar ENTER duas vezes (devido ao buffer) */
    getchar();
    getchar();

    /* Retorna 0 indicando que o programa terminou com sucesso */
    return 0;
}