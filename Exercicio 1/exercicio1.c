/*Faça um algoritmo que imprima na tela todos os múltiplos de 3 entre 0 a 100*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int multiTres;

int main(){
    setlocale(LC_ALL, "portuguese");
printf("---------------------- EXERCÍCIO 01 -----------------\n\n");
printf("Todos os múltiplos de 3 entre 0 a 100 são:\n");
    for(multiTres = 0; multiTres <= 100; multiTres++){
        if (multiTres%3 == 0){
            printf("%d\n", multiTres);

        } else {
            multiTres++;
          }

    }

}
