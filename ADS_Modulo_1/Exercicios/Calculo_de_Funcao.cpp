#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
	
	// w = 2r2+4r-6
	
	float A, B, C;
	float X1, X2;
	
    printf("Uma fun��o do 2� Grau � do tipo f(x)=ax� + bx + c\n\n");

	printf("Digite um valor para A: ");
    scanf("%f", &A);

    printf("Digite um Valor para B: ");
    scanf("%f", &B);

    printf("Digite um valor para C: ");
    scanf("%f", &C);
	
	double delta = sqrt(pow(B, 2) - 4 * A * C);
	
	
	X1 = (-B + delta)/2*A;
	X2 = (-B - delta)/2*A;
	
	printf("Fun��o do 2� � f(x)=%.2fX� + %.2fX + %.2f\n", A,B,C);
    printf("As ra�zes s�o X'= %.2f e X'' = %.2f. \n", X1, X2);
	printf("Delta vale %.2f", delta);

	
	
	
}