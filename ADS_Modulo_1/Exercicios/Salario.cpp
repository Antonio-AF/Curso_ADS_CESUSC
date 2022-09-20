/*

12. Faça um algoritmo para ler o salário de um funcionário e aumentá-lo em 15%. Após o
aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o
salário final.

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h> 

int main(){

    setlocale(LC_ALL, "Portuguese");
    

    float S_Inicial, S_Final, S_Aumento;
    char Nome[12]; 

    printf("Esse Algoritmo calcula o aumento de salário e o desconto de imposto.\n\n");
	fflush(stdin);
	
    printf("Digite o Nome do Colaborador: ");
    scanf("%s", &Nome);
    fflush(stdin);


    printf("Digite o Salario Inicial do Colaborador: ");
    scanf("%f", &S_Inicial);

    S_Aumento = S_Inicial * 115/100;
    S_Final = S_Aumento - (S_Aumento * 8/100);

    printf("Ola %s \n", Nome[12]);
    printf("Seu salario inicial e R$%.2f\n", S_Inicial);
    printf("Seu salario com aumento e R$%.2f\n", S_Aumento);
    printf("Seu salario final e R$%.2f\n\n", S_Final);

    system("pause");
    return 0;
}
