// Programa para captar dados de uma pessoa.
// Criando estrutura antes do int main() para definir os campos da pessoa.
# include <stdio.h>
# include <locale.h>
# include <string.h>

struct data
{
    int dia;
    char mes[20];
    int ano;
};


struct pessoa
{
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
    setlocale(LC_ALL, ".utf8");
    struct quantidadePessoas qPessoas;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qPessoas.quantidade);
    getchar();
    for (int i = 0; i < qPessoas.quantidade; i++) {
        struct pessoa p1;
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(p1.nome, 50, stdin);
        // Remove the newline character from the end of the string
        p1.nome[strcspn(p1.nome, "\n")] = 0;
        fflush(stdin);
        printf("Digite estado civil da pessoa %d: ", i + 1);
        fgets(p1.estadoCivil, 20, stdin);
        // Remove the newline character from the end of the string
        p1.estadoCivil[strcspn(p1.estadoCivil, "\n")] = 0;
    fflush(stdin);
    printf("Digite o sexo da pessoa %d: ", i + 1);
    fgets(p1.sexo, 10, stdin);
    // Remove the newline character from the end of the string
    p1.sexo[strcspn(p1.sexo, "\n")] = 0;
    fflush(stdin);
    printf("Digite o dia de nascimento da pessoa %d: ", i + 1);
    scanf("%d", &p1.dataNascimento.dia);
    getchar();
    printf("Digite o mês de nascimento: ");
    fgets(p1.dataNascimento.mes, 20, stdin);
    // Remove the newline character from the end of the string
    p1.dataNascimento.mes[strcspn(p1.dataNascimento.mes, "\n")] = 0;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &p1.dataNascimento.ano);
    getchar();
    qPessoas.pessoas[i] = p1;
    }

    printf("\nDados das pessoas:\n");
    for  (int i = 0; i < qPessoas.quantidade; i++)
    {
    printf("Nome: %s\n", qPessoas.pessoas[i].nome);
    printf("Estado Civil: %s\n", qPessoas.pessoas[i].estadoCivil);
    printf("Sexo: %s\n", qPessoas.pessoas[i].sexo);
    printf("Data de Nascimento: %02d/%s/%04d\n", qPessoas.pessoas[i].dataNascimento.dia, qPessoas.pessoas[i].dataNascimento.mes, qPessoas.pessoas[i].dataNascimento.ano);
    printf("\n");
    }
    printf("Pressione Enter para continuar...");
    getchar();

    return 0;
}