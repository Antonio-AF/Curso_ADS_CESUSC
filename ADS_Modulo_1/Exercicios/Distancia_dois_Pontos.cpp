/*

10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano.
Cada ponto é um par ordenado (x,y).

*/

#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    system("cls");
    int X1, X2, Y1, Y2;
    float D_pontos;

    printf("Esse algoritmo calcula a distância entre dois ponto informados pelo usuário!\n\n");
    

    printf("Digite os valores para os pontos X1 e Y1: ");
    scanf("%d %d", &X1, &Y1);

    printf("Digite os Valores para os Pontos X2 e Y2: ");
    scanf("%d %d", &X2, &Y2);
    printf("%d", X2);
    printf("%d", Y2);

    D_pontos = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

    printf("A Distancia dos Pontos A=(%d, %d) e B=(%d, %d) = %.2f .\n\n", X1, Y1, X2, Y2, D_pontos);

    system("pause");
    return 0;

}
