#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero para a contagem regressiva: ");
    scanf("%d", &numero);

    for (int i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }
    getchar(); // Limpa o buffer do teclado
    printf("Pressione ENTER para sair..."); 
    getchar(); // Aguarda o usuário pressionar ENTER    
    return 0;
}