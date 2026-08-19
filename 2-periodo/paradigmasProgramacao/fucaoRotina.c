// criar um arquivo chamado funcaoRotina.c para criar rotinas e funções em C
//  bibliotecas para lingua portuguesa
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>
# include <windows.h>


int Square(int a) {
    return a * a;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    n2 = Square(n1);
    printf("O quadrado vale: %d\n", n2);

    system("pause");

    return 0;
}