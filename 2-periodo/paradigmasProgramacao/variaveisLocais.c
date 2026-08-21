# include <stdio.h>
# include <stdlib.h>

// Exemplo de passagem de arrays como parâmetros, uso de ponteiros e variáveis locais.
// Um vetor em C pode ser manipulado por meio de um ponteiro para o seu primeiro elemento.
// A função abaixo recebe esse ponteiro e o tamanho do vetor para percorrê-lo.

void imprimeVetor(int *vetor, int tamanho) {
    // Percorre todos os elementos do vetor e imprime cada valor.
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    // Define a quantidade de elementos do vetor.
    int tamanho = 5;

    // Aloca dinamicamente memória para 5 inteiros.
    // malloc retorna um ponteiro para o início do bloco de memória alocado.
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    // Verifica se a alocação foi bem-sucedida.
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Inicializa os elementos do vetor com valores de 1 a 5.
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i + 1;
    }

    // Chama a função que imprime os valores do vetor.
    imprimeVetor(vetor, tamanho);

    // Libera a memória alocada para evitar vazamento de memória.
    free(vetor);

    // Pausa a execução para permitir a visualização do resultado no terminal.
    getchar();

    return 0;
}