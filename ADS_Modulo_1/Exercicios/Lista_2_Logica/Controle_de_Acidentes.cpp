/* 

11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias. Assume que cada mês possui
sempre 30 dias.

*/

#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int Dias_Acidentes, Dias, Mes, Ano;


    printf("Esse Algoritmo tras os dias sem Acidetes a partir da data.\n\n");

    printf("Digite a quantidade de dias sem acidentes: ");
    scanf("%d", &Dias_Acidentes);

    Ano = Dias_Acidentes / 365;
    Mes = (Dias_Acidentes - (Ano * 365))/30;
    Dias =  (Dias_Acidentes - (Ano * 365)-(Mes * 30));

    printf("Temos um total de %d dias sem acidentes\n\n", Dias_Acidentes);
    printf("Estamos à %d anos, %d meses e %d dias sem acidentes.\n\n", Ano, Mes, Dias);

    system("pause");
    return 0;

}