/*
13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
CENTENA = x DEZENA = x UNIDADE = x
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h> 

int main(){

    int Dezena = 0, Centena = 0, Unidade = 0, num;

    printf("Digite um numero até 3 Digitos: ");
    scanf("%d", &num);

    while(num > 0){

        if(num >= 100 && num <= 999){

            num = num - 100;
            Centena = Centena + 1;

        }else if(num >= 10 && num <= 100){

            num = num - 10;
            Dezena = Dezena + 1;

        }else if (num > 0 && num < 10){

            num = num - 1;
            Unidade = Unidade + 1;
        }

    }

    printf("Temos %d Centena, %d Dezena e %d Unidade\n", Centena, Dezena, Unidade);


    system("pause");
    return 0;
    


}