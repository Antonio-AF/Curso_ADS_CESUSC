/*
1 - Escreva um algoritmo que leia oas valores da Base e Altura de um Triângulo Qualquer e
calcule a area desse Triângulo.
*/

#include<stdio.h>
#include<locale.h> // Import da Biblioteca Locale para acentuaçães.

int main(){
	
	//Função para utilização da acentuação dos textos no programa. 
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração das variáveis A de Altura, B de Base e Area_T Area do Triângulo.
	float A, B, Area_T;
	
	
	printf("Digite o Valor da Altura do Triângulo: ");
	scanf("%f", &A);
	printf("Digite o Valor da Base do Triângulo: ");
	scanf("%f", &B);
	
	Area_T = (B * A)/2;
	
	printf("A Area do Triângulo com Altura = %.2f e Base = %.2f é %.2f", A, B, Area_T);
	
	return 0;
}