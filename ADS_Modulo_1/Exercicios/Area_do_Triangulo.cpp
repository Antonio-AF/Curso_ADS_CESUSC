/*
1 - Escreva um algoritmo que leia oas valores da Base e Altura de um Tri�ngulo Qualquer e
calcule a area desse Tri�ngulo.
*/

#include<stdio.h>
#include<locale.h> // Import da Biblioteca Locale para acentua��es.

int main(){
	
	//Fun��o para utiliza��o da acentu��o dos textos no programa. 
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o das vari�veis A de Altura, B de Base e Area_T Area do Tri�ngulo.
	float A, B, Area_T;
	
	
	printf("Digite o Valor da Altura do Tri�ngulo: ");
	scanf("%f", &A);
	printf("Digite o Valor da Base do Tri�ngulo: ");
	scanf("%f", &B);
	
	Area_T = (B * A)/2;
	
	printf("A Area do Tri�ngulo com Altura = %.2f e Base = %.2f � %.2f", A, B, Area_T);
	
	return 0;
}