# include <stdio.h>

// Somatório Iterativo e Somatório Recursivo

int somatorioRecursivo(int n) {
    if (n == 0) {
        return 0;
    }
    return n + somatorioRecursivo(n - 1);
}

int somatorioIterativo(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Somatorio Recursivo of %d is %d\n", number, somatorioRecursivo(number));
    printf("Somatorio Iterativo of %d is %d\n", number, somatorioIterativo(number));
    getchar(); // Wait for user input before closing (optional)
    getchar(); // Additional getchar to actually wait for the Enter key after scanf
    return 0;
}