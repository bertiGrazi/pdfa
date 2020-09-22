#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float n=0;
    int v=0;
    setlocale(LC_ALL, "portuguese");
    printf("---------------------- EXERCÍCIO 02 -----------------\n\n");

        for(n=1;n>=0 && v!=16;n=n+n){
           v++;
           printf("%iº quadro tem %.0f graos\n", v, n);

        }

        printf("Logo, o total a ser pago será de: %0.f grãos\n", n);
}

