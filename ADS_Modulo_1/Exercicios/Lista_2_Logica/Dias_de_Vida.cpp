/*
4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de
vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma
pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ
VIVEU 6935 DIAS 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int Idade, Dias_Vida;
    char Nome[12];

    printf("Digite sue Nome: ");
    scanf("%c", &Nome);
    fflush(stdin);

    printf("Digite sua idade em anos: ");
    scanf("%d", &Idade);

    Dias_Vida = Idade * 365;

    printf("%12s, voc� j� viveu %d dias!\n", Nome[12], Dias_Vida);

    system("Pause");
    return 0;

}
