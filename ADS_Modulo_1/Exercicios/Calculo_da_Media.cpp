#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <locale.h>

// Calculo da media aritmetica das notas.

int main(){

	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, media;
	
	nota1 = 9.8;
	nota2 = 5.7;
	
	media = (nota1 + nota2)/2;
	
	printf("Sua media é: %f", media);
	
	
	return 0;

}
