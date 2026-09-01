// criar uma estrutura para pedir a quantidade de pessoas e armazenar os dados de cada uma delas

# include <stdio.h>

struct data
{
        int dia;
        char mes[20];
        int ano;
};


struct pessoa {
    char nome[50];
    char estadoCivil[20];
    char sexo[10];
    struct data dataNascimento;
};

struct quantidadePessoas
{
        int quantidade;
        struct pessoa pessoas[50];
};


int main() {
    struct quantidadePessoas qPessoas;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qPessoas.quantidade);
    for (int i = 0; i < qPessoas.quantidade; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", qPessoas.pessoas[i].nome);
        printf("Digite o estado civil da pessoa %d: ", i + 1);
        scanf("%s", qPessoas.pessoas[i].estadoCivil);
        printf("Digite o sexo da pessoa %d: ", i + 1);
        scanf("%s", qPessoas.pessoas[i].sexo);
        printf("Digite o dia de nascimento da pessoa %d: ", i + 1);
        scanf("%d", &qPessoas.pessoas[i].dataNascimento.dia);
        printf("Digite o mes de nascimento da pessoa %d: ", i + 1);
        scanf("%s", qPessoas.pessoas[i].dataNascimento.mes);
        printf("Digite o ano de nascimento da pessoa %d: ", i + 1);
        scanf("%d", &qPessoas.pessoas[i].dataNascimento.ano);
    }

    printf("\nDados das pessoas:\n");
    for (int i = 0; i < qPessoas.quantidade; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", qPessoas.pessoas[i].nome);
        printf("Estado Civil: %s\n", qPessoas.pessoas[i].estadoCivil);
        printf("Sexo: %s\n", qPessoas.pessoas[i].sexo);
        printf("Data de Nascimento: %02d/%s/%04d\n", qPessoas.pessoas[i].dataNascimento.dia, qPessoas.pessoas[i].dataNascimento.mes, qPessoas.pessoas[i].dataNascimento.ano);
    }

    printf("Pressione Enter para continuar...");
    getchar();
    getchar();

    return 0;
}