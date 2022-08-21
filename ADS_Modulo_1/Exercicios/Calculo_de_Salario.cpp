/* Construa um algoritmo que calcule o salário de um colaborador pelo valor
da hora/trabalho e quandidade de horas trabalhadas.
lembrar o colaborador possui um salário bruto e líquido
Salário Bruto = hora/tabalho  * horas_trabalhadas
Salário Líquido = Salário Bruto - INSS - IR
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float Salario_Liquido, Salario_Bruto, Valor_Hora, Horas_Trabalhadas;
	float INSS, IR;
	
	printf("Digite o Valor da Hora de Trabalho: ");
	scanf("%f", &Valor_Hora);
	
	printf("Digite a quantidade de Horas Trabalhadas: ");
	scanf("%f", &Horas_Trabalhadas);
	
	Salario_Bruto = Valor_Hora * Horas_Trabalhadas;
	
	if(Salario_Bruto <= 1212.00){		
		Salario_Liquido = Salario_Bruto - (Salario_Bruto * 0.075);		
		printf("O Salario Líquido é:%.2f", Salario_Liquido);
		
	}else if (1212.01 >= Salario_Bruto >= 2427.35){
		Salario_Liquido = Salario_Bruto - (Salario_Bruto * 0.09);
		printf("Estou aqui 1 %.2f", Salario_Liquido);
		if (1903.99 >= Salario_Liquido <= 2826.65){		
			Salario_Liquido = Salario_Liquido - (Salario_Liquido * 0.075);
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}else{
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}
	}else if(2427.36 >= Salario_Bruto >= 3641.03){
		Salario_Liquido = Salario_Bruto - (Salario_Bruto * 0.12);
		printf("Estou aqui:%.2f", Salario_Liquido);
		if(1903.99 >= Salario_Liquido <= 2826.65){
			Salario_Liquido = Salario_Liquido - (Salario_Liquido * 0.075);
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}else if (2826.66 >= Salario_Liquido <= 3751.05){
			Salario_Liquido = Salario_Liquido - (Salario_Liquido * 0.15);
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}else{
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}
	}else if(Salario_Bruto >= 3641.04){
		Salario_Liquido = Salario_Bruto - (Salario_Bruto * 0.14);
		
		if(3751,06 >= Salario_Liquido <= 4664,68){
			Salario_Liquido = Salario_Liquido - (Salario_Liquido * 0.225);
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}else if(Salario_Liquido > 4664,68){
			Salario_Liquido = Salario_Liquido - (Salario_Liquido * 0.275);
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}else{
			printf("O Salário Líquido é:%.2f", Salario_Liquido);
		}
	}	
	
    return 0;
    
}