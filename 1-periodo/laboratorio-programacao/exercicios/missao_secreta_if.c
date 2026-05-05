#include <stdio.h>

int main() {
    int fezAtividade, estudou;

    // Entrada de dados
    printf("Voce fez a atividade do dia? (1 = SIM / 0 = NAO): ");
    scanf("%d", &fezAtividade);

    printf("Voce estudou pelo menos 30 minutos? (1 = SIM / 0 = NAO): ");
    scanf("%d", &estudou);

    // Lógica principal
    if (fezAtividade == 1 && estudou == 1) {
        printf("🟢 Missao cumprida! XP +100! Futuro desbloqueado!\n");
    } else if ((fezAtividade == 1 && estudou == 0) ||
               (fezAtividade == 0 && estudou == 1)) {
        printf("🟡 Quase la… faltou so um pouco pra subir de nivel!\n");
    } else {
        printf("🔴 Game Over (por hoje)! Tente novamente amanha 😅\n");
    }

    return 0;
}
