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


int main() {
    setlocale(LC_ALL, ".utf8");
    struct pessoa p1;
    printf("Digite o nome: ");
    fgets(p1.nome, 50, stdin);
    // Remove the newline character from the end of the string
    p1.nome[strcspn(p1.nome, "\n")] = 0;
    fflush(stdin);
    printf("Digite estado civil: ");
    fgets(p1.estadoCivil, 20, stdin);
    // Remove the newline character from the end of the string
    p1.estadoCivil[strcspn(p1.estadoCivil, "\n")] = 0;
    fflush(stdin);
    printf("Digite o sexo: ");
    fgets(p1.sexo, 10, stdin);
    // Remove the newline character from the end of the string
    p1.sexo[strcspn(p1.sexo, "\n")] = 0;
    fflush(stdin);
    printf("Digite o dia de nascimento: ");
    scanf("%d", &p1.dataNascimento.dia);
    getchar();
    printf("Digite o mês de nascimento: ");
    fgets(p1.dataNascimento.mes, 20, stdin);
    // Remove the newline character from the end of the string
    p1.dataNascimento.mes[strcspn(p1.dataNascimento.mes, "\n")] = 0;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &p1.dataNascimento.ano);
    fflush(stdin);

    getchar();

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", p1.nome);
    printf("Estado Civil: %s\n", p1.estadoCivil);
    printf("Sexo: %s\n", p1.sexo);
    printf("Data de Nascimento: %02d/%s/%04d\n", p1.dataNascimento.dia, p1.dataNascimento.mes, p1.dataNascimento.ano);
    printf("Pressione Enter para continuar...");
    getchar();
    getchar();

    return 0;
}