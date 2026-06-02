#include <stdio.h>
#include <unistd.h>

//Plínio Tiago da Silva

int main(void)
{
    for (int contador = 10; contador >= 0; contador--) {
        printf("%d\n", contador);
        sleep(1);
    }

    printf("Bomba desativada com sucesso!\n");
    getchar(); // Espera o usuário pressionar Enter antes de encerrar o programa
    return 0;
}
