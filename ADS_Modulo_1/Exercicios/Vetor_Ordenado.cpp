/*

1) Construa um algoritmo que leia um vetos de 10 posi��es com valores e gere o seguinte ,meni de op��es:

A- Vetor em ordem crescente.
B- Vetor em ordem decrescente
C- Vertor original Maior e Menor valor com suas respectivos indices.
D- Gerar  de forma rand�mica(aleatoria) entrada de vaores automaticamente.

*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	system("cls");

	int Vetor[10] = {4, 5, 7, 10, 3, 1, 2, 6, 8, 9};
	int ord = 0;

	printf("======= Menu de Opcoes =======");
	printf("Digite 1 para o Vetor em Ordem Crescente \n");
	printf("Digite 2 para o Vetor em Ordem Decrescente \n");

	printf("O Vetor Original e: [");
	for (int r = 0;r<10; r++)
	{
		printf("%d,", Vetor[r]);
	}
	printf("]\n");

	for (int i = 0; i<10; i++)
	{

		for (int j = 0; j<10; j++)
		{

			if (Vetor[i] <= Vetor[j])
			{

				ord = Vetor[i];
				Vetor[i] = Vetor[j];
				Vetor[j] = ord;
			}
		}
	}

	printf("O Vetor ordenado Crescente � [");
	for (int i = 0; i<10; i++)
	{
		printf("%d,", Vetor[i]);
	}

	printf("]\n");

	for (int e=0; e<10; e++)
	{
		for (int f = 0; f<10; f++)
		{

			if (Vetor[e] > Vetor[f])
			{

				ord = Vetor[f];
				Vetor[f] = Vetor[e];
				Vetor[e] = ord;
			}
		}
	}

	printf("O Vetor ordenado Decrescente � [");
	for (int e = 0; e<10; e++)
	{
		printf("%d,", Vetor[e]);
	}
	printf("]\n");

	system("pause");
	return 0;
}
