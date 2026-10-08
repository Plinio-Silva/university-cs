/*
 * Lista Encadeada Simples, célula, item
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct tipo_item {
    int code;
    char nome [30];
    int quantidade;
};

struct tipo_celula {
    tipo_item item;
    struct tipo_celula *prox;
};

struct tipo_lista {
    tipo_celula *inicio;
    tipo_celula *fim;
    int total;
};

int escolherCriterio(const char *acao, int permiteTodos = 0) {
    int opcao;
    printf("\n%s por:\n", acao);
    if (permiteTodos) {
        printf("1. Todos os itens\n");
    }
    printf("%d. Codigo\n", permiteTodos ? 2 : 1);
    printf("%d. Nome\n", permiteTodos ? 3 : 2);
    printf("%d. Quantidade\n", permiteTodos ? 4 : 3);
    printf("0. Voltar\n");
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) {
        return 0;
    }
    return opcao;
}

int corresponde(tipo_item *item, int criterio, int codigo, const char *nome, int quantidade) {
    switch (criterio) {
        case 1: return item->code == codigo;
        case 2: return strcmp(item->nome, nome) == 0;
        case 3: return item->quantidade == quantidade;
        default: return 0;
    }
}

int lerFiltro(int criterio, int permiteTodos, int *codigo, char *nome, int *quantidade) {
    if (permiteTodos && criterio == 1) {
        return 1;
    }
    int campo = criterio - (permiteTodos ? 1 : 0);
    switch (campo) {
        case 1:
            printf("Codigo: ");
            return scanf("%d", codigo) == 1;
        case 2:
            printf("Nome: ");
            return scanf("%29s", nome) == 1;
        case 3:
            printf("Quantidade: ");
            return scanf("%d", quantidade) == 1;
        default:
            return 0;
    }
}

void exibirItem(tipo_celula *item) {
    printf("Codigo: %d\n", item->item.code);
    printf("Nome: %s\n", item->item.nome);
    printf("Quantidade: %d\n", item->item.quantidade);
    printf("--------------------\n");
}

void flvazia(tipo_lista *lista) {
    tipo_celula *cabeca = (tipo_celula *) malloc(sizeof(tipo_celula));
    cabeca->prox = NULL;
    lista->inicio = cabeca;
    lista->fim = cabeca;
    lista->total = 0;
}

void inserir(tipo_lista *lista) {
    tipo_celula *nova = (tipo_celula *) malloc(sizeof(tipo_celula));
    printf("\n\nInserindo novo item:\n");
    if (nova == NULL) {
        printf("Erro ao alocar memoria!\n");
        return;
    }
    printf("Codigo: ");
    if (scanf("%d", &nova->item.code) != 1) {
        free(nova);
        return;
    }
    printf("Nome: ");
    if (scanf("%29s", nova->item.nome) != 1) {
        free(nova);
        return;
    }
    printf("Quantidade: ");
    if (scanf("%d", &nova->item.quantidade) != 1) {
        free(nova);
        return;
    }
    nova->prox = lista->inicio->prox;
    lista->inicio->prox = nova;
    if (lista->fim == lista->inicio) {
        lista->fim = nova;
    }
    lista->total++;
    printf("\n ITEM INSERIDO COM SUCESSO!!!\n\n");
    system("pause");
}

void mostrar(tipo_lista *lista) {
    int opcao = escolherCriterio("Mostrar", 1);
    if (opcao == 0 || opcao < 0 || opcao > 4) {
        return;
    }
    int codigo = 0, quantidade = 0, encontrou = 0;
    char nome[30] = "";
    if (!lerFiltro(opcao, 1, &codigo, nome, &quantidade)) {
        printf("Filtro invalido!\n");
        system("pause");
        return;
    }
    tipo_celula *p = lista->inicio->prox;
    printf("\n\nITENS:\n");
    while (p != NULL) {
        if (opcao == 1 || corresponde(&p->item, opcao - 1, codigo, nome, quantidade)) {
            exibirItem(p);
            encontrou = 1;
        }
        p = p->prox;
    }
    if (!encontrou) {
        printf("Nenhum item encontrado!\n");
    }
    system("pause");
}

tipo_celula* pesquisar(tipo_lista *lista) {
    int opcao = escolherCriterio("Pesquisar", 0);
    if (opcao == 0 || opcao < 0 || opcao > 3) {
        return NULL;
    }
    int codigo = 0, quantidade = 0;
    char nome[30] = "";
    if (!lerFiltro(opcao, 0, &codigo, nome, &quantidade)) {
        printf("Filtro invalido!\n");
        system("pause");
        return NULL;
    }
    printf("\n\nPesquisando item:\n");
    tipo_celula *p = lista->inicio->prox;
    while (p != NULL) {
        if (corresponde(&p->item, opcao, codigo, nome, quantidade)) {
            printf("\n\n");
            exibirItem(p);
            system("pause");
            return p;
        }
        p = p->prox;
    }
    printf("Item nao encontrado!\n");
    system("pause");
    return NULL;
}

void remover(tipo_lista *lista) {
    int opcao = escolherCriterio("Remover", 0);
    if (opcao == 0 || opcao < 0 || opcao > 3) {
        return;
    }
    int codigo = 0, quantidade = 0;
    char nome[30] = "";
    if (!lerFiltro(opcao, 0, &codigo, nome, &quantidade)) {
        printf("Filtro invalido!\n");
        system("pause");
        return;
    }
    printf("\n\nRemovendo item:\n");
    tipo_celula *p = lista->inicio;
    while (p->prox != NULL && !corresponde(&p->prox->item, opcao, codigo, nome, quantidade)) {
        p = p->prox;
    }
    if (p->prox == NULL) {
        printf("Item nao encontrado!\n");
        return;
    }
    tipo_celula *temp = p->prox;
    p->prox = temp->prox;
    if (temp == lista->fim) {
        lista->fim = p;
    }
    free(temp);
    lista->total--;
    printf("\n ITEM REMOVIDO COM SUCESSO!!!\n\n");
    system("pause");
}

void inserirNoFim(tipo_lista *lista) {
    tipo_celula *nova = (tipo_celula *) malloc(sizeof(tipo_celula));
    printf("\n\nInserindo item no fim da lista:\n");
    if (nova == NULL) {
        printf("Erro ao alocar memoria!\n");
        return;
    }
    printf("Codigo: ");
    if (scanf("%d", &nova->item.code) != 1) {
        free(nova);
        return;
    }
    printf("Nome: ");
    if (scanf("%29s", nova->item.nome) != 1) {
        free(nova);
        return;
    }
    printf("Quantidade: ");
    if (scanf("%d", &nova->item.quantidade) != 1) {
        free(nova);
        return;
    }
    nova->prox = NULL;
    lista->fim->prox = nova;
    lista->fim = nova;
    lista->total++;
    printf("\n ITEM INSERIDO NO FIM COM SUCESSO!!!\n\n");
    system("pause");
}

int menu() {
    int opcao;
    printf("\n\n1. Inserir\n");
    printf("2. Mostrar\n");
    printf("3. Pesquisar\n");
    printf("4. Remover\n");
    printf("5. Inserir no Fim\n");
    printf("0. Sair\n");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void liberar(tipo_lista *lista) {
    tipo_celula *p = lista->inicio;
    while (p != NULL) {
        tipo_celula *proxima = p->prox;
        free(p);
        p = proxima;
    }
}

int main() {

    int opcao;
    tipo_lista lista;
    flvazia(&lista);

    do {
        system("cls");
        opcao = menu();
    switch (opcao) {
        case 0:
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
    }
    } while (opcao != 0);

    liberar(&lista);
    return 0;
}
