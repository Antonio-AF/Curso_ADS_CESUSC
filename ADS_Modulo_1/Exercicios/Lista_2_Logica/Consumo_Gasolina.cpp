/*
5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
colocar no tanque.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float Gas_Litros, Preco_Gas, Valor_Add;

    printf("Digite o valor que voc� quer por de Gasolina: ");
    scanf("%f", &Valor_Add);

    printf("Digite o Valor do Litro da Gasolina: ");
    scanf("%f", &Preco_Gas);

    
    Gas_Litros = Valor_Add/Preco_Gas;

    printf("O Valor %.2f em litros deu %.2f Litros /n", Valor_Add, Gas_Litros);

    system("Pause");
    return 0;

}