/*Escreva um programa que receba um n�mero inteiro positivo n e retorne a soma dos n primeiros n�meros inteiros.
Por exeemplo, se for digitado 5, o programa deve mostrar o resultado da soma = 15, pois, 15 = 1 + 2 + 3 + 4 + 5*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero, soma, contador;
soma = 0;
contador = 1;

int main(){
    setlocale(LC_ALL, "portuguese");
    printf("---------------------- EXERC�CIO 03 -----------------\n\n");
    printf("Digite um n�mero\n");
    scanf("%d", &numero);
        if(numero > 0){
            for(contador = 1; contador <= numero; contador++){
                soma = soma + contador;
            }
            printf("A soma dos n primeiros inteiros positivos de %d � %d\n", numero, soma);
        } else {
            printf("N�mero inv�lido!");
          }
}
