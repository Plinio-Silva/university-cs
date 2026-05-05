#include <stdio.h>

int main() {
    int fezAtividade, estudou, codigo;

    // Entrada
    printf("Voce fez a atividade do dia? (1 = SIM / 0 = NAO): ");
    scanf("%d", &fezAtividade);

    printf("Voce estudou pelo menos 30 minutos? (1 = SIM / 0 = NAO): ");
    scanf("%d", &estudou);

    // Transformando em código
    codigo = fezAtividade + estudou;

    // Switch-case
    switch (codigo) {
        case 2:
            printf("🟢 Missao cumprida! XP +100! Futuro desbloqueado!\n");
            break;

        case 1:
            printf("🟡 Quase la… faltou so um pouco pra subir de nivel!\n");
            break;

        case 0:
            printf("🔴 Game Over (por hoje)! Tente novamente amanha 😅\n");
            break;

        default:
            printf("Erro: valores invalidos!\n");
            break;
    }

    return 0;
}
