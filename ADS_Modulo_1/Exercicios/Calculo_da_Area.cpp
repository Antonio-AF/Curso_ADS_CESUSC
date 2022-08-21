#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Base, Altura, Raio, PI, L;
	PI = 3.141592;	
	
	printf(" Digite 1 para calcular a area do Triângulo:\n ");
	printf("Digite 2 para calcular a area do Circulo:\n ");
	printf("Digite 3 para calcular a area do Quadrado:\n ");
	int opcao;
	scanf("%d", &opcao);
	
	if(opcao == 1){
		
		printf("Digite o valor da Base: ");
		scanf("%f", &Base);
		printf("Digite o valor da Altura: ");
		scanf("%f", &Altura);
		
		float Area = (Base * Altura)/2;
		
		printf("O valor da area é  %.2f", Area);
		
	} else if (opcao == 2){
		printf("Digite o valor do Raio: ");
		scanf("%f", &Raio);
		
		float Area_c = PI * pow(Raio, 2);
		printf("A area do Circulo é :%f ", Area_c);
		
	}else if(opcao == 3){
		
		printf("Digite o Lado do Quadrado: ");
		scanf("%f", &L);
		
		float Area_q = pow(L, 2);
		printf("A area do Quadrado é :%.2f ", Area_q);
		
	}else{
		
		printf("A Entrada Digitada é Invalida!!!");
	}
		
	
	return 0;
}