/* 

9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário
forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a
máquina informe quanto será o valor arrecadado.

*/

#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int P, M, G;
    float Total_Compra;

    float Valor_P = 10;
    float Valor_M = 12;
    float Valor_G = 15;

    printf("Digite a quantidade de Camisetas P: ");
    scanf("%d", &P);

    printf("Digite a quantidade de Camisetas M: ");
    scanf("%d", &M);

    printf("Digite a quantidade de Camisetas G: ");
    scanf("%d", &G);

    Total_Compra = (P * Valor_P) + (M * Valor_M) + (G * Valor_G);

    printf("O Valor Total da Compra é R$%.2f, foram adquiridas %d Camisetas P, %d Camisetas M e %d Camisetas G.\n\n", Total_Compra, P, M, G);


    system("Pause");
    return 0;

}