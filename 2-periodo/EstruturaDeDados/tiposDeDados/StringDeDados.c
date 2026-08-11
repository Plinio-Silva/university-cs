#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    char string1[10] = {'M',  'a', 'r', 'i', 'a', '\0'};

    char string2[10] = "Bruna";

    char string3[10] = "Francisco";

    printf("\n\n String1: %s ",string1);

    printf("\n\n string2: %s ", string2);

    printf("\n\n string3: %s ", string3);

    getchar();
    getchar();
    return 0;
}