#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <iostream>


char caracter;

//inicio
main(){
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    for(int i=1; i<=5;i++){

        printf("\n Digite o %i caracter: ", i);
        scanf("%c", &caracter);
        fflush(stdin);
        printf("\n \n");
        printf("\n Caracter[%i]: %c \n", i, caracter);
        
    }

    system("pause");
    return 0;
}