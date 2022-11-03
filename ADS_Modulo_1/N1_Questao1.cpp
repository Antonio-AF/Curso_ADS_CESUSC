/*
01 – Ana e Maria, cada uma delas tem um cofrinho com muitas moedas, e elas
querem saber quantos reais conseguiram poupar individualmente e juntas. Faça
um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor
total economizado por Ana, por Maria e por ambas, em reais. Considere que elas
somente guardaram moedas de 50 centavos e 1 real. Construa um algoritmo
codificado na linguagem C que leia para Ana as respectivas quantidades de
moedas de cada valor, assim como para a Maria e por fim calcule o valor em
reais e centavos economizado por Ana, e por Maria e por ambas, mostrando nas
telas tais informações. (5,0 pontos)

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

// char NomeMaria[12], NomeAna[12];
int Moedas_Maria_1, Moedas_Maria_50, Moedas_Ana_1, Moedas_Ana_50;
float Total_Maria, Total_Ana, Total;

int main(){

    setlocale(LC_ALL, "Portuguese");
    system("cls");

    printf("Digite a quantidade de moedas de R$1,00 real e R$0,50 Centavos que Maria pos no cofre: ");
    scanf("%d %d", &Moedas_Maria_1, &Moedas_Maria_50);

    printf("Digite a quantidade de moedas de R$1,00 real e R$0,50 Centavos que Ana pos no cofre: ");
    scanf("%d %d", &Moedas_Ana_1, &Moedas_Ana_50);

    Total_Maria = Moedas_Maria_1 + (Moedas_Maria_50 * 0.50);
    Total_Ana = Moedas_Ana_1 + (Moedas_Ana_50 * 0.50);
    
    Total = Total_Ana + Total_Maria;

    printf("Foi colocado pela Maria um total de %d Moedas de R$1,00 Real. \n", Moedas_Maria_1);
    printf("Foi colocado pela Maria um total de %d Moedas de R$0,50 Centavos. \n", Moedas_Maria_50);

    printf("Foi colocado pela Ana um total de %d Moedas de R$1,00 Real. \n", Moedas_Ana_1);
    printf("Foi colocado pela Ana um total de %d Moedas de R$0,50 Centavos. \n", Moedas_Ana_50);

    printf("Foi economizado pela Maria um total de R$%.2f Reais. \n", Total_Maria);
    printf("Foi economizado pela Ana um total de R$%.2f Reais. \n", Total_Ana);


    printf("Foi economizado pela Ana e Maria um total de R$%.2f Reais. \n",  Total);

    system("pause");
    return 0;

}