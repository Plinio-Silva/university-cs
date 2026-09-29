/*
 * Lista Encadeada Simples, célula, item
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>

typedef struct tipo_item {
    int code;
    char nome [30];
    int quantidade;
};

typedef struct tipo_celula {
    tipo_item item;
    struct tipo_celula *prox;
};

typedef struct tipo_lista {
    tipo_celula *inicio;
    tipo_celula *fim;
    int total;
};

void flvazia(tipo_lista *lista) {
    tipo_celula *cabeca = (tipo_celula *) malloc(sizeof(tipo_celula));
    cabeca->prox = NULL;
    lista->inicio = cabeca;
    lista->fim = cabeca;
    lista->total = 0;
}

int menu() {
    int opcao;
    printf("1. Inserir\n");
    printf("2. Mostrar\n");
    printf("3. Pesquisar\n");
    printf("4. Remover\n");
    printf("5. Inserir no Fim\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {

    int opcao;
    tipo_lista lista;
    flvazia(&lista);

    do {
        system("cls");

        opcao = menu();
    switch (opcao) {
        case 0: return 0; 
        break;

        case 1: inserir(&lista);
        break;

        case 2: mostrar(&lista);
        break;

        case 3: pesquisar(&lista);
        break;

        case 4: remover(&lista);
        break;

        case 5: inserirNoFim(&lista);
        break;

        default: printf("Opcao invalida!\n");
        getch();
    }
    } while (1);

    return 0;
}
