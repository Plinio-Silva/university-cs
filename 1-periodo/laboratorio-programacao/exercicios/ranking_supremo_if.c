#include <stdio.h>

int main() {
    float horas;

    printf("Quantas horas voce estudou durante a semana? ");
    scanf("%f", &horas);

    if (horas >= 0 && horas <= 2) {
        printf("😴 Nivel 1: Modo soneca ativado\n");
    } else if (horas >= 3 && horas <= 5) {
        printf("🙂 Nivel 2: Acordando pra vida\n");
    } else if (horas >= 6 && horas <= 10) {
        printf("🔥 Nivel 3: Foco total!\n");
    } else if (horas > 10) {
        printf("👑 Nivel 4: Lenda do conhecimento!\n");
    } else {
        printf("Valor invalido!\n");
    }

    return 0;
}
