/* Construa um algoritmo em C que leia 10 numero n�meros e localize o maior e menor valor. */

#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numMaior, numMenor;

    numMaior = 0;
    numMenor = 1000;


    for(int i = 0; i <= 10; i++){     

        int j = rand() % 199;
        printf("%d %d \n", j, i);

        if(j < numMenor){
            numMenor = j;
        }else if(j > numMaior){
            numMaior = j;
        }           

    }
    printf("O Numero Maior �:%d e o Menor Numero �:%d \n", numMaior, numMenor);
    
    // system("pause");
    return 0;

}
