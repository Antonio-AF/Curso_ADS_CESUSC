/*

2. Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar todos os
cavalos comprados para um haras.

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int Qto_Cavalos, Qto_Ferraduras;
    const int Patas = 4;

    printf("Informe a Quantidade de Cavalos Comprados: ");
    scanf("%d", &Qto_Cavalos);

    Qto_Ferraduras = Qto_Cavalos * Patas;

    printf("A Quantidade de Ferraduas a ser compras �: %d Unidades \n", Qto_Ferraduras);

    system("Pause");
    return 0;

}