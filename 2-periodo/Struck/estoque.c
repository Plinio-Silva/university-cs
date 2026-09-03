# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

# define TAM 5

struct  tipo_item {
    int codigo;
    char nomeItem[50];
    int quantidade;
};

typedef struct tipo_lista {
    int total;
    struct tipo_item itens[TAM];
} tipo_lista;

void flvazia(tipo_lista *lista) {
    lista->total = 0;
}

void inserir(tipo_lista *lista) {
    struct tipo_item item;
    printf("Digite o codigo do item: ");
    scanf("%d", &item.codigo);
    getchar(); // Limpar o buffer do teclado antes de ler a string
    printf("Digite o nome do item: ");
    fgets(item.nomeItem, 50, stdin);
    printf("Digite a quantidade do item: ");
    scanf("%d", &item.quantidade);

    lista->itens[lista->total] = item;
    lista->total++;
}

void mostrarLista(tipo_lista *lista) {
    printf("\n\nMostrando a lista: \n");

    for (int i = 0; i < lista->total; i++)
    {
        printf("Codigo: %d\n", lista->itens[i].codigo);
        printf("Nome: %s", lista->itens[i].nomeItem);
        printf("Quantidade: %d\n", lista->itens[i].quantidade);
        printf("\n");
    }
}
    


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    tipo_lista lista;

    flvazia(&lista);

    for (int i = 0; i < TAM; i++) {
    inserir(&lista);
    }

    mostrarLista(&lista);

    system("pause");

    return 0;
}