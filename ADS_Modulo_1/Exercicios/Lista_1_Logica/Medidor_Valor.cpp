/*
3 ? Algoritmo Media Valor
Dado uma s�rie de 05 valores inteiros de temperatura, leia este 5 valores e calcule a m�dia
destes, e em seguida apresente esta m�dia e caso esta seja maior e igual que 30 graus
escreva ?temperatura acima da m�dia, calor?, caso esta m�dia seja inferior ou igual a 15 graus
?temperatura a baixo da m�dia, frio ? e se esta estiver no intervalo entre estes dois valores,
?temperatura mediana, temperatura agrad�vel?

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese")
    system("cls"); // Para limpar a Tela.

    int T1, T2, T3, T4, T5;
    float Media;

    printf("Esse algoritmo calcula a media de 5 temperaturas informadas pelo usu�rio!\n");

    printf("Digite as T1 Temperaturas: \n");
    scanf("%d", &T1);

    printf("Digite as T2 Temperaturas: \n");
    scanf("%d", &T2);

    printf("Digite as T3 Temperaturas: \n");
    scanf("%d", &T3);

    printf("Digite as T4 Temperaturas: \n");
    scanf("%d", &T4);

    printf("Digite as T5 Temperaturas: \n");
    scanf("%d", &T5);

    Media = (T1 + T2 + T3 + T4 + T5)/5;

    if (Media >= 30.00){
        printf("Temperatura acima da m�dia Est� Calor! ");
    }else if(Media <=15){
        printf("Temperatua abaixo da m�dia Est� Frio! ");
    }else{
        printf("Temperatura mediana, Temperatura Est� Agradavel! ");
    }


    system("pause");
    return 0;

}