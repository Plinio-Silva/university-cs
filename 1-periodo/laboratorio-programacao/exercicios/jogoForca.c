#include <stdio.h>
#include <string.h>

//Plínio Tiago da Silva

int main(void)
{
    const char palavraSecreta[] = "computador";
    char letrasAdivinhadas[sizeof(palavraSecreta)] = {0};
    int tentativasErradas = 0;
    const int limiteErros = 6;
    int letrasRestantes = strlen(palavraSecreta);
    char chute[10];

    for (int i = 0; i < letrasRestantes; i++) {
        letrasAdivinhadas[i] = '_';
    }

    printf("Bem-vindo ao jogo da forca!\n");

    while (tentativasErradas < limiteErros && letrasRestantes > 0) {
        printf("\nPalavra: ");
        for (int i = 0; i < letrasRestantes; i++) {
            printf("%c ", letrasAdivinhadas[i]);
        }
        printf("\nErros: %d de %d\n", tentativasErradas, limiteErros);
        printf("Digite uma letra: ");

        if (fgets(chute, sizeof(chute), stdin) == NULL) {
            break;
        }

        char letra = chute[0];
        if (letra == '\n' || letra == '\0') {
            printf("Entrada inválida. Digite uma letra.\n");
            continue;
        }

        int acerto = 0;
        for (int i = 0; i < letrasRestantes; i++) {
            if (palavraSecreta[i] == letra && letrasAdivinhadas[i] == '_') {
                letrasAdivinhadas[i] = letra;
                acerto = 1;
            }
        }

        if (acerto) {
            int contagem = 0;
            for (int i = 0; i < letrasRestantes; i++) {
                if (letrasAdivinhadas[i] == '_') {
                    contagem++;
                }
            }
            letrasRestantes = contagem;
            printf("Você acertou uma letra!\n");
        } else {
            tentativasErradas++;
            printf("Letra incorreta.\n");
        }
    }

    if (letrasRestantes == 0) {
        printf("\nParabéns! Você venceu. A palavra era '%s'.\n", palavraSecreta);
    } else {
        printf("\nVocê perdeu. Limite de erros atingido. A palavra era '%s'.\n", palavraSecreta);
    }
    getchar(); // Espera o usuário pressionar Enter antes de encerrar o programa
    return 0;
}
