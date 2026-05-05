#include <stdio.h>

int main() {
    // Variáveis: umidade_baixa e horario_regar (1 = verdadeiro, 0 = falso)
    int umidade_baixa = 1;  // Umidade do solo está baixa
    int horario_regar = 0;  // Horário de regar não atingido
    
    // Condição: Irrigação ativada se umidade está baixa OU é horário de regar
    if (umidade_baixa || horario_regar) {
        printf("Irrigação Ativada\n");
    } else {
        printf("Irrigação Desligada\n");
    }

     printf("Pressione ENTER para sair...");
getchar();
getchar();
    
    return 0;
}