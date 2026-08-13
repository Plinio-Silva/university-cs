
# include <stdio.h>
# include <locale.h>

int pegarNumero() {
    int n;
    printf("\n\nDigite um numero: ");
    scanf("%d", &n);
    return n;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n\nSoma: %d", pegarNumero() + pegarNumero());

    getchar();
    getchar();

    return 0;
}