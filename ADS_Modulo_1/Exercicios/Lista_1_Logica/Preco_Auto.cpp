/*
2 - O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o dos
impostos (45% do pre�o de f�brica) e a percentagem do revendedor (28% do pre�o de f�brica).
Fa�a um algoritmo que leia o nome do autom�vel e o pre�o de f�brica e imprima o nome do
autom�vel e o pre�o final.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

int main(){

    float Preco, Preco_Final, Imposto, Revenda_Cust;
    char Auto[20];

    printf("Informe o Valor de Fabrica do Automovel: ");
    scanf("%f", &Preco);

    printf("Informe o Nome do Automovel: ");
    scanf("%c", &Auto);

    Imposto = Preco * 0.45;
    Revenda_Cust = Preco * 0.28;

    Preco_Final = Preco + Imposto + Revenda_Cust;

    printf("O Valor Final do Automovel �: %.2f", Preco_Final);

    system("PAUSE");
    return 0;
}