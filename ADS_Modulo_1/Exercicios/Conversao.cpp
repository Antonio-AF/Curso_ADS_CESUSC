//1) Fazer um programa em C que pergunte um valor em metros e imprime o correspondente em decímetros e milímetros.

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <iostream>


int main(){

    setlocale(LC_ALL, "Portuguese");

    float Mm, Cm, M;
    int opcao;

    printf("Esse programa realiza a conversão de Unidades de Medidas Metros para Centimetros e Milimetros\n");

    printf("Digite o Valor em metros que você quer Converter: ");
    scanf("%f", &M);

    printf("Digite 1 para converter em Centímetro e Digite 2 para converter em Milímertro:");
    scanf("%d", &opcao);


    if (opcao == 1){        
        Cm = M*100;
        printf("O valor em Centímetros é %.2f", Cm);

    }else if (opcao == 2){

        Mm = M*100;
        printf("O valor em Milímetros é %.2f",  Mm);

    }else {
        
        ;
        printf("A opcao digitada é incorreta!!!");
    }

    return 0;
}
