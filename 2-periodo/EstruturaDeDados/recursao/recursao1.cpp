# include <stdio.h>

int factorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorialRecursivo(n - 1);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d\n", number, factorialRecursivo(number));
    getchar(); // Wait for user input before closing (optional)
    getchar(); // Additional getchar to actually wait for the Enter key after scanf
    return 0;
}