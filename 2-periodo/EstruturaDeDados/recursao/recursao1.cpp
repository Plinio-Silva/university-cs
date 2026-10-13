# include <stdio.h>

// Fatorial Recursivo e Fatorial Iterativo

int fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}

int fatorialIterativo(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Fatorial Recursivo of %d is %d\n", number, fatorialRecursivo(number));
    printf("Fatorial Iterativo of %d is %d\n", number, fatorialIterativo(number));
    getchar(); // Wait for user input before closing (optional)
    getchar(); // Additional getchar to actually wait for the Enter key after scanf
    return 0;
}