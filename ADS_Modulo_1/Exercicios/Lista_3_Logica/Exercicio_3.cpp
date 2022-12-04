/*

3 - Escreva um programa que leia 733 números aleatórios de 0 até 300 e
imprima o maior deles e quantas vezes o maior número foi lido, apresentando
este e suas respectivas posições.

*/

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    int VetorA[733];
    int maior = 0;

    setlocale(LC_ALL, "Portuguese");


    for (int i = 0; i < 733; i++){

        VetorA[i] = rand() % 300;
        printf("\nVetorA[%i] = %i ", i, VetorA[i]);

    }

    for(int i = 0; i < 733; i++){

        if(i == 0){
            VetorA[i] = maior;
        }
        if(VetorA[i] > maior){
            maior = VetorA[i];
            printf("\n\n");
            printf("\nElementos Maiores no VetorA! ");
            printf("\nVetorA[%i] = %i ", i, VetorA[i]);
        }

        
        

    }

}
