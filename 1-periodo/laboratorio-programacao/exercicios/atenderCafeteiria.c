#include <stdio.h>
#include <string.h>

int main(void)
{
    char pedido[100];

    printf("Bem-vindo à cafeteria!\n");
    printf("Digite um pedido, 'conta' para encerrar e ver a conta, ou 'sair' para sair sem pagar.\n");

    while (1) {
        printf("Pedido: ");
        if (fgets(pedido, sizeof(pedido), stdin) == NULL) {
            break;
        }

        pedido[strcspn(pedido, "\n")] = '\0';

        if (strcmp(pedido, "sair") == 0) {
            printf("Saindo do atendimento. Obrigado!\n");
            break;
        }

        if (strcmp(pedido, "conta") == 0) {
            printf("Encerrando pedidos e gerando a conta...\n");
            break;
        }

        if (pedido[0] != '\0') {
            printf("Pedido recebido: %s\n", pedido);
        } else {
            printf("Nenhum pedido informado. Tente novamente.\n");
        }
    }
    getchar(); // Espera o usuário pressionar Enter antes de encerrar o programa
    return 0;
}
