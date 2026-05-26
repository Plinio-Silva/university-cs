#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int contador = 10; contador >= 0; contador--) {
        printf("%d\n", contador);
        sleep(1);
    }

    printf("Bomba desativada com sucesso!\n");
    return 0;
}
