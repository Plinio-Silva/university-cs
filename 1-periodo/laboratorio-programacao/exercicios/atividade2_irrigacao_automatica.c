// Autor: Plínio Tiago da Silva

#include <stdio.h>

int main() {
    // Declaracao das variaveis para armazenar os estados da umidade e horario
    int umidadeBaixa;
    int horarioRegar;

    // Solicitar entrada do usuario para a umidade do solo (1 para baixa, 0 para normal)
    printf("Digite 1 se a umidade do solo estiver baixa ou 0 se estiver normal: ");
    scanf("%d", &umidadeBaixa);

    // Solicitar entrada do usuario para o horario de regar (1 para sim, 0 para nao)
    printf("Digite 1 se for horario de regar ou 0 se nao for: ");
    scanf("%d", &horarioRegar);

    // Verificacao da condicao: irrigacao ativada se umidade baixa OU horario de regar
    if (umidadeBaixa || horarioRegar) {
        printf("Irrigacao Ativada\n");
    } else {
        printf("Irrigacao Desligada\n");
    }

    // Pausa para o usuario pressionar ENTER antes de sair
    printf("Pressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}