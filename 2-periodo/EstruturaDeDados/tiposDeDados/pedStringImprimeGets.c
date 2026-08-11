#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char string[20];

    printf("\n\n Digite seu nome: ");

    gets(string);

    printf("\n\n Vove digitou: %s", string);

    getchar();
    getchar();
    
    return 0;
}