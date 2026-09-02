// usando struct para armazenar uma cadeia de caracteres

# include <stdio.h>
# include <locale.h>
# include <string.h>
# include <stdlib.h>

typedef struct {
    char nome[50];
    char estadoCivil[20];
    char sexo[10];
    struct {
        int dia;
        char mes[20];
        int ano;
    } dataNascimento;
} Pessoa;

int main() {
    setlocale(LC_ALL, ".utf8");
    Pessoa p1;
    printf("Digite o nome da pessoa: ");
    fgets(p1.nome, 50, stdin);
    // Remove the newline character from the end of the string
    p1.nome[strcspn(p1.nome, "\n")] = 0;
    fflush(stdin);
    printf("Digite estado civil da pessoa: ");
    fgets(p1.estadoCivil, 20, stdin);
    // Remove the newline character from the end of the string
    p1.estadoCivil[strcspn(p1.estadoCivil, "\n")] = 0;
    fflush(stdin);
    printf("Digite o sexo da pessoa: ");
    fgets(p1.sexo, 10, stdin);
    // Remove the newline character from the end of the string
    p1.sexo[strcspn(p1.sexo, "\n")] = 0;
    fflush(stdin);
    printf("Digite o dia de nascimento da pessoa: ");
    scanf("%d", &p1.dataNascimento.dia);
    getchar();
    printf("Digite o mês de nascimento: ");
    fgets(p1.dataNascimento.mes, 20, stdin);
    // Remove the newline character from the end of the string
    p1.dataNascimento.mes[strcspn(p1.dataNascimento.mes, "\n")] = 0;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &p1.dataNascimento.ano);
    printf("Dados da pessoa:\n");
    printf("Nome: %s\n", p1.nome);
    printf("Estado Civil: %s\n", p1.estadoCivil);
    printf("Sexo: %s\n", p1.sexo);
    printf("Data de Nascimento: %d/%s/%d\n", p1.dataNascimento.dia, p1.dataNascimento.mes, p1.dataNascimento.ano);
    system("pause");
    return 0;
}


