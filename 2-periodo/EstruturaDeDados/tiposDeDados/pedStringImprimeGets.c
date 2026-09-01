#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, ".UTF-8");

    char string[20];

    printf("\n\n Digite seu nome: ");

    gets(string);

    printf("\n\n Você digitou: %s", string);

    getchar();
    getchar();
    
    return 0;
}