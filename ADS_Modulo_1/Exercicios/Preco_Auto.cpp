/*
2 - O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos
impostos (45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica).
Faça um algoritmo que leia o nome do automóvel e o preço de fábrica e imprima o nome do
automóvel e o preço final.

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

    printf("O Valor Final do Automovel é: %.2f", Preco_Final);

    system("PAUSE");
    return 0;
}