/* 
1. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as
dimens�es de um terreno e depois exibir a �rea do terreno. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

float D1, D2, Area;

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Digite as Dimens�es do Terreno para Saber a Metragem Quadrada do terreno!\n\n");
    fflush(stdin);

    printf("Digite a Dimens�o D1: ");
    scanf("%f", &D1);
    fflush(stdin);

    printf("Digite a Dimens�o D2: ");
    scanf("%f", &D2);

    Area = D1 * D2;

    printf("A area do Terreno �: %2.2fm� \n", Area);

    system("Pause");
    return 0;  


}