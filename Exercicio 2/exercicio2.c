/*Fa�a um algoritmo que imprima o quadrado de todos os n�mero inteiros entre 15 e 200.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int contador, numQuadrado;

int main(){
    setlocale(LC_ALL, "portuguese");
printf("---------------------- EXERC�CIO 02 -----------------\n\n");
printf("O quadrado de todos os n�meros inteiros entre 15 e 200 s�o:\n");
    for(contador = 15; contador <= 200; contador++){
        numQuadrado = contador * contador;
        printf("%d x %d = %d\n", contador, contador, numQuadrado);
    }
}
