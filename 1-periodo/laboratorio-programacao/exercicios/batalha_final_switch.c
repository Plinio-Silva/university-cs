#include <stdio.h>

int main() {
    float horasCelular, horasEstudo;
    int resultado;

    printf("Quantas horas voce ficou no celular hoje? ");
    scanf("%f", &horasCelular);

    printf("Quantas horas voce estudou hoje? ");
    scanf("%f", &horasEstudo);

    if (horasEstudo > horasCelular) {
        resultado = 1;
    } else if (horasEstudo == horasCelular) {
        resultado = 0;
    } else {
        resultado = -1;
    }

    switch (resultado) {
        case 1:
            printf("🏆 VITORIA! O futuro agradece!\n");
            break;

        case 0:
            printf("🤝 Empate tecnico… cuidado, o celular ta te observando 👀\n");
            break;

        case -1:
            printf("💀 Derrota… o celular dominou o dia!\n");
            break;

        default:
            printf("Erro inesperado!\n");
            break;
    }

    return 0;
}
