/*
5 ? Algoritmo PA ? Progressão Aritmética
Faça um programa que imprima os elementos de uma PA e o somatório da mesma dados :
primeiro termo , numero de termos e razão.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <locale.h>

// an = a1 + (n ? 1)r
// Variaveis

int N_Termo;
int P_Termo;
int Elem;
int Soma;
int Razao;
int List_PA[] = {};


int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a quantidade de elementos da PA: ");
    scanf("%d", &N_Termo);

    printf("Digite a Razão da PA: ");
    scanf("%d", &Razao);

    printf("Digite o Primeiro Termo da PA: ");
    scanf("%d", &P_Termo);

    int i = 0;
    int j = 0;

    while(i < N_Termo){        
        
        P_Termo = P_Termo + Razao;
        printf("%d", P_Termo, "; ");
        i++;
        List_PA[j] = P_Termo;
        j++;
        
    }


    return 0;

}
