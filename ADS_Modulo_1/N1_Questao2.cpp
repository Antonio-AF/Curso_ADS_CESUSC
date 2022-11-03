/*
02 – Uma empresa de desenvolvimento de software está codificando um sistema
de geração de folhas de pagamento dos colaboradores de uma empresa de
Suprimentos de Informática, para isto pede alguns dados de entrada do setor de
gestão de pessoas e assim gera a folha do mês. Pede o Nome do Colaborador,
quantidade de horas trabalhadas no mês, valor da Hora/trabalho, qual o % de
INSS a descontar e qual o % do Imposto de renda a descontar. Com estas
informações inseridas no sistema, este gera e mostra na tela a folha do
colaborador com os seguintes dados: Nome, Horas/Trabalhas, Valor Hora,
salário bruto, % INSS, % IR, e salário líquido. (5,0 pontos)

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

float INSS, IR;
float Hora_T, Valor_H, Salario_L,Salario_Final, Salario_B, Desconto_INSS, Desconto_IR;
char Nome[12];

int main(){

    setlocale(LC_ALL, "Portuguese");
    system("cls");


    printf("Digite o nome do Colaborador: ");
    scanf("%s", &Nome);
    fflush(stdin);

    printf("Digite a quantidade de Horas Trabalhados: ");
    scanf("%f", &Hora_T);

    printf("Digite o Valor da Hora Trabalhada: ");
    scanf("%f", &Valor_H);

    printf("Digite as Porcentagens de Desconto de INSS: ");
    scanf("%f", &INSS);
    
    printf("Digite as Porcentagens de Desconto de IR: ");
    scanf("%f", &IR);

    Salario_B = Hora_T * Valor_H;    
    Desconto_INSS = Salario_B * (INSS/100);

    Salario_L = Salario_B - Desconto_INSS;
    Desconto_IR = Salario_L * (IR/100);
    
    Salario_Final = Salario_L - Desconto_IR;


    printf("==========================================================\n");
    printf("============== DEMONSTRATIVO DE SAL�RIO ===================\n");
	printf("===== O Colaborado %s \n", Nome);
	printf("===== Trabalhou o total de %.2f Horas\n", Hora_T);
	printf("===== Valor da Hora e de R$%.2f \n", Valor_H);
	printf("===== O Colaborador recebeu R$%.2f \n", Salario_B);
	printf("===== Teve um Desconto de INSS no valor de R$%.2f \n", Desconto_INSS);
	printf("===== Teve um Desconto de IR no valor de R$%.2f \n", Desconto_IR);
	printf("==========================================================\n");
	printf("===== Total a Receber pelo Colaborado e de R$%.2f \n", Salario_Final);
	printf("==========================================================\n");
	


    system("Pause");
    return 0;

}
