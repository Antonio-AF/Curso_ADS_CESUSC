/*
6. O restaurante a quilo Bem-B�o cobra R$12,00 por cada quilo de refei��o. Escreva um
algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
Assume que a balan�a j� desconte o peso do prato.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    const float Valor_Prato = 12;
    float Valor_Pagar, Peso_Prato;

    printf("Digite o Peso do Prato: ");
    scanf("%f", &Peso_Prato);

    Valor_Pagar = Peso_Prato * Valor_Prato;

    printf("O valor a pagar por %.3f Kg, � %.2f! \n", Peso_Prato, Valor_Pagar);


    system("pause");
    return 0;


}