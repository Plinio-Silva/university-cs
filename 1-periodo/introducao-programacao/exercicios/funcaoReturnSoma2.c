#include <stdio.h>

float somar(float a,float b){return a+b;}
float aplicar(float (*o)(float,float),float a,float b){return o(a,b);}
float ler(char*m){float n;printf("%s",m);scanf("%f",&n);return n;}
int main(){float num=ler("Digite o primeiro número: "),primeiro=num;num=ler("Digite o segundo número: ");printf("Resultado: %.2f + %.2f = %.2f\n",primeiro,num,aplicar(somar,primeiro,num));getchar();getchar();return 0;}