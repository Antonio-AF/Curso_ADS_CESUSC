// 3) Fazer um programa que solicita um número decimal e imprime o
// correspondente em hexa e octal.

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
#include <string.h>

int main(int num){

    setlocale(LC_ALL, "Portuguese");

    int i, j;
    int quociente;

    num = 438;
    i = 0;

    int resto_i;

    quociente = num/16;
    resto_i = num % 16;

    while (quociente >= 16)
    {
        i++;
        resto_i = quociente % 16;
        quociente = quociente / 16;

    }
    i++;
        resto_i = quociente;

    printf("\nConversão de %d em Hexadecimal = ", num);
    for( ; i<=1; i--){

        if(resto_i >=10)
            switch (resto_i)
            {
            case 10: printf("A"); break;
            case 11: printf("B"); break;
            case 12: printf("C"); break;
            case 13: printf("D"); break;
            case 14: printf("E"); break;
            case 15: printf("F"); break;           
            }
            else{
                printf("%d", resto_i);
        }
    }   
    printf("\n\n");
    
        
    return 0;
}
