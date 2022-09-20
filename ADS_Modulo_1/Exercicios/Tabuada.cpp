





// 2)Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>


int main(){

    int tabuada, multiplicador;

    printf("Digite qual Tabuada voce quer calcular: ");
    scanf("%d", &multiplicador);

    int i = 0;

    for(i = 0; i<=20; i++){

        tabuada = multiplicador * i;
        printf("%d X %d = %d\n", multiplicador, i, tabuada);
    }

    return 0;
}