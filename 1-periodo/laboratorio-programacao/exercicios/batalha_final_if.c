#include <stdio.h>

int main() {
    float horasCelular, horasEstudo;

    printf("Quantas horas voce ficou no celular hoje? ");
    scanf("%f", &horasCelular);

    printf("Quantas horas voce estudou hoje? ");
    scanf("%f", &horasEstudo);

    if (horasEstudo > horasCelular) {
        printf("🏆 VITORIA! O futuro agradece!\n");
    } else if (horasEstudo == horasCelular) {
        printf("🤝 Empate tecnico… cuidado, o celular ta te observando 👀\n");
    } else {
        printf("💀 Derrota… o celular dominou o dia!\n");
    }

    return 0;
}
