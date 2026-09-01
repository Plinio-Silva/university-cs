// Código para pegar dia, mês e ano

# include <stdio.h>
# include <locale.h>
# include <string.h>

struct data
{
    int dia;
    char mes[20];
    int ano;
};

int main() {
    setlocale(LC_ALL, ".utf8");
    int dia, ano;
    char mes[20];
    struct data d1;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    fflush(stdin);
    printf("Digite o mês: ");
    fgets(mes, 20, stdin);
    // Remove the newline character from the end of the string
    mes[strcspn(mes, "\n")] = 0;
    fflush(stdin);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Data: %02d/%s/%04d\n", dia, mes, ano);
    getchar();
    getchar();

    return 0;
}