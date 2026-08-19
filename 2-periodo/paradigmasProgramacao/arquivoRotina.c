# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>
# include <windows.h>

// Caso em que é preciso declarar a função antes o protótipo da função

int Square(int a);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d", &n1);
    n2 = Square(n1);
    printf("O quadrado vale: %d\n", n2);
    return 0;
}
// pode ser declarado depois do main, mas precisa do protótipo antes do main
int Square(int a) {
    return a * a;
}