// 3) Fazer um programa que solicita um n�mero decimal e imprime o
// correspondente em hexa e octal.

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
#include <string.h>

int main(){
	
	int opcao;
	int valor;
	
	printf("Conversos de Bases Numericas \n");
	printf("Digite 1 para Hexadecimal \n");
	printf("Digite 2 para Decimal \n");
	printf("Informe a Op��o: ");
	scanf("%d", &opcao);
	getchar();
	
	if(opcao ==1){
		
		printf("Informe o Valor em Decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%d Em Hexadecimal EH: %x \n", valor, valor);
		
	}else if(opcao == 2){
		
		printf("Informe o Valor em Hexadecimal: ");
		scanf("%x", &valor);
		getchar();
		printf("%x Em Decimal �: %d", valor, valor);
	}else if(opcao == 3){
		
		printf("Informe o Valor em Hexadecimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%x Em Decimal �: %o", valor, valor);		
	}else{
		printf("A Op��o Informada � Invalida!\n ");
	}
	
     
    system("pause");    
    return 0;
}
