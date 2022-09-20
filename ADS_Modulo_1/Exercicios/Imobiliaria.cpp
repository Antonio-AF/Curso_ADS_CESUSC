/* 
1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

float D1, D2, Area;

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Digite as Dimensões do Terreno para Saber a Metragem Quadrada do terreno!\n\n");
    fflush(stdin);

    printf("Digite a Dimensão D1: ");
    scanf("%f", &D1);
    fflush(stdin);

    printf("Digite a Dimensão D2: ");
    scanf("%f", &D2);

    Area = D1 * D2;

    printf("A area do Terreno é: %2.2fm² \n", Area);

    system("Pause");
    return 0;  


}