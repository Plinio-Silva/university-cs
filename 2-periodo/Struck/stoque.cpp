#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 5

struct tipo_item{
    int cod;
    char nome[50];
    int quant;
};

struct tipo_lista{
    int total;
    tipo_item itens[TAM];
};

void flvazia(tipo_lista *lista){
    lista -> total = 0;
}

void inserir(tipo_lista *lista){
    system("cls");
   
    if(lista->total == TAM){
        printf("\n\n\tLista cheia! Sem possibilidade de inserir novos itens.");
        return;
    }

    printf("\n\n====== INSERINDO ITEM NA LISTA ======");
    tipo_item item;
    printf("\n\nDigite o codigo: ");
    scanf("%d", &item.cod);
    getchar(); // consume the newline character left by scanf
    printf("\nDigite o nome do item: ");
    fgets(item.nome, 50, stdin);
    printf("\nDigite a quantidade: ");
    scanf("%d", &item.quant);
   
    lista -> itens[lista->total] = item;
    lista -> total++;
    printf("\n\n\tItem cadastrado com sucesso!");
}

void mostrar(tipo_lista *lista){
    system("cls");
   
    if(lista->total == 0)
    {
        printf("\n\n\tLista vazia! sem itens para mostrar.");
        return;
    }
    

    printf("\n\n MOSTRANDO A LISTA:");
   
    for( int i = 0 ; i < lista->total; i++ ){
        printf("\n\n----- %dº ITEM -----", i+1);
        printf("\nCod: %d", lista->itens[i].cod);
        printf("\nNome: %s", lista->itens[i].nome);
        printf("Quant: %d", lista->itens[i].quant);
    }
}

void pesquisar(tipo_lista *lista){
    system("cls");
   
    if(lista->total == 0)
    {
        printf("\n\n\tLista vazia! Sem itens para pesquisar.");
        return;
    }

    int cod;
    printf("\n\nDigite o codigo do item que deseja pesquisar: ");
    scanf("%d", &cod);

    for(int i = 0; i < lista->total; i++){
        if(lista->itens[i].cod == cod){
            printf("\n\n----- ITEM ENCONTRADO -----");
            printf("\nCod: %d", lista->itens[i].cod);
            printf("\nNome: %s", lista->itens[i].nome);
            printf("Quant: %d", lista->itens[i].quant);
            return;
        }
    }

    printf("\n\n\tItem não encontrado.");
}

int main(){    
    setlocale(LC_ALL, "Portuguese");        
    printf("\n\n\n");
   
    tipo_lista lista;
    int op;
   
    flvazia(&lista);


    while(1){ // laço infinito
        system("cls"); // limpa a tela
       
        printf("\n\n====== MENU ======");
        printf("\n[1] - INSERIR NA LISTA");
        printf("\n[2] - MOSTRAR A LISTA");
        printf("\n[3] - EXCLUIR DA LISTA");
        printf("\n[4] - PESQUISAR NA LISTA");
        printf("\n[0] - SAIR");
       
        printf("\n\n Digite sua opcao: ");
        scanf("%d", &op);
       
        switch(op){
            case 0: return 0;
           
            case 1: inserir(&lista);
                    break;
                   
            case 2: mostrar(&lista);
                    break;
                   
            //case 3: excluir(&lista);
                    break;
           
            case 4: pesquisar(&lista);
        }
       
        printf("\n\n");
        system("pause"); // segura a tela
    }
   
    return 0;
}