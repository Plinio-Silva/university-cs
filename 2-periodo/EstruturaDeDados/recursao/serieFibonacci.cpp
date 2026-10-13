// Quantos termos queremos exibir na tela de forma Iterativa e Recursiva
// Implementação da série de Fibonacci de forma recursiva e iterativa
#include <stdio.h>

int fibonacciRecursivo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int fibonacciIterativo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int termos;
    printf("Enter the number of terms: ");
    scanf("%d", &termos);
    printf("Serie Fibonacci Recursiva: ");
    for (int i = 0; i < termos; i++) {
        printf("%d ", fibonacciRecursivo(i));
    }
    printf("\n");
    printf("Serie Fibonacci Iterativa: ");
    for (int i = 0; i < termos; i++) {
        printf("%d ", fibonacciIterativo(i));
    }
    printf("\n");
    getchar(); // Wait for user input before closing (optional)
    getchar(); // Additional getchar to actually wait for the Enter key after scanf
    return 0;
}