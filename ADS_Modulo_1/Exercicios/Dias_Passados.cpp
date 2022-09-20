/*
7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do
ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int Dias, Mes, Qto_Dias;

    printf("Digite em dia do Mês você está: ");
    scanf("%d", &Dias);

    printf("Digite em que Mês do Anos você está: ");
    scanf("%d", &Mes);

    Qto_Dias = (Mes * 30) + (Dias * 1);

    printf("A quantidade de dias passadas desde o inicio do Ano é: %d\n", Qto_Dias);


    system("Pause");
    return 0;
}