#include <stdio.h>

void cabecalho(){
    printf("\n====== FACULDADE FUCAPI =====");
    printf("\n=== CIÊNCIA DA COMPUTAÇÃO  ===");
    printf("\n======== 1º PERÍODO =======");

}

void rodape(){
    printf("\nEndereço: Avenida Governador Danilo de Matos Areosa, nº 381 - Distrito Industrial I, CEP 69075-351\n");
    printf("Telefone: (92) 3303-9000\n");
    printf("E-mail: contato@fucapi.br\n");  
}

int main() {
    cabecalho();
    printf("\n\n\t AULA  DE FUNÇÕES \n\n");
    rodape();

    getchar(); // Aguarda o usuário pressionar Enter antes de fechar o programa
    return 0;
}