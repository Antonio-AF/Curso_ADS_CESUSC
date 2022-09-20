/*
8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua m�dia
ponderada (as notas tem pesos respectivos de 1, 2 e 3).

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float N1, N2, N3, Mp;
    char Nome;
    int P1, P2, P3;

    printf("Digite o Nome do Aluno: ");
    scanf("%s", &Nome);
    fflush(stdin);

    printf("Digite sua nota N1: : ");
    scanf("%f", &N1);
    fflush(stdin);


    printf("Digite sua nota N2: ");
    scanf("%f", &N2);
    fflush(stdin);


    printf("Digite sua nota N3: ");
    scanf("%f", &N3);
    fflush(stdin);


    P1 = 1;
    P2 = 2;
    P3 = 3;

    Mp = ((P1 * N1) + (P2 * N2) + (P3 * N3)/ (P1 + P2 + P3) );

    printf("Olá %s, ", Nome);
    printf("Sua Média é: %.2f\n", Mp);


    system("Pause");
    return 0;


}