#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char s1[50];

    printf("\n\nDigite a string: ");
    fgets(s1, 50, stdin);

    printf("\nString original: %s", s1);

    s1[strcspn(s1, "\n")] = 0; // Remove the newline character from the string

    strrev(s1); // Inverte a string
    printf("\nString invertida: %s", s1);

    printf("\n\nString invertida para frente: ");
    for (int i = strlen(s1) -1; i >= 0; i--) {
        printf("%c", s1[i]);
    }
    printf("\n");

    getchar(); // Wait for user input before closing the program

    return 0;
}