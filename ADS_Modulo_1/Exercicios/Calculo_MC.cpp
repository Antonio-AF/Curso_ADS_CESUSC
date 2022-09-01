// Faça um algoritmo para calcular o IMC de uma pessoa e classificar 

#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float Peso, Altura, IMC;
    int Idade;
    char Nome[];

    printf("Informe seu Nome: ");
    scanf("%s", &Nome);
    fflush(stdin);

    printf("Digite o seu Peso: ");
    scanf("%f", &Peso);
    fflush(stdin);

    printf("Digite sua Altura: ");
    scanf("%f", &Altura);
    fflush(stdin);

    printf("Digite sua Idade: ");
    scanf("%i", &Idade);
    fflush(stdin);

    IMC = Peso / pow(Altura, 2);

    printf("\n O Atleta: %s", Nome);
    printf("\n Com a idade de %i anos: ", Idade);
    printf("\n Com a Altura de: %2.2f metros", Altura);
    printf("\n Com o Peso de: %2.2f Kg", Peso);
    printf("\n Apresentou IMC = %2.2f \n", IMC);

    if(IMC<18.5){
        printf("Sua Classificação está Abaixo do Peso!\n");
    }else if(IMC >= 18.5 && IMC <=24.9){
        printf("Sua Classificação está com Peso Normal!\n");
    }else if(IMC > 25.0 && IMC <=29.9){
        printf("Sua Classificação está Sobrepeso!\n");
    }else if(IMC >= 30.0 && IMC < 40.0){
        printf("Sua Classificação está Obesidade!\n");
    }else if(IMC >= 40.0){
        printf("Sua Classificação está Obesidade Grave!\n");
    }


    system("pause");
    return 0;
}