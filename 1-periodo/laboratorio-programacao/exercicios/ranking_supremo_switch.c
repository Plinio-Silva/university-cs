#include <stdio.h>

int main() {
    float horas;
    int nivel;

    printf("Quantas horas voce estudou durante a semana? ");
    scanf("%f", &horas);

    if (horas >= 0 && horas <= 2) {
        nivel = 1;
    } else if (horas >= 3 && horas <= 5) {
        nivel = 2;
    } else if (horas >= 6 && horas <= 10) {
        nivel = 3;
    } else if (horas > 10) {
        nivel = 4;
    } else {
        nivel = 0;
    }

    switch (nivel) {
        case 1:
            printf("😴 Nivel 1: Modo soneca ativado\n");
            break;

        case 2:
            printf("🙂 Nivel 2: Acordando pra vida\n");
            break;

        case 3:
            printf("🔥 Nivel 3: Foco total!\n");
            break;

        case 4:
            printf("👑 Nivel 4: Lenda do conhecimento!\n");
            break;

        default:
            printf("Valor invalido!\n");
            break;
    }

    return 0;
}
