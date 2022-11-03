/*
22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
poupar. Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor
total economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e
ainda moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int M1, M5, M10, M25, M50, M1R;
    float Moeda;
    float Valor_Total;

    printf("Insira as Moedas 1 Centavo|5 Centavos|10 Centavos|25 Centavos|50 Centavos| 1 Real \n\n");
    
    
	M1 = 0;
	M5 = 0;
	M10 = 0;
	M25 = 0;
	M50 = 0;
	M1R = 0;
	Moeda = 9;

    while (Moeda != 0){
		
		printf("Digite a Moeda: ");
        scanf("%f", &Moeda);
        
        if(Moeda == 1){
        	M1++;
		}else if(Moeda == 5){
			M5++;
		}else if(Moeda == 10){
			M10++;
		}else if(Moeda == 25){
			M25++;
		}else if(Moeda == 50){
			M50++;
		}else if(Moeda == 100){
			M1R++;
		}

        Valor_Total = Valor_Total + Moeda;

    	
    }
    
    printf("Foram inseridos %d de Moedas de R$0,01\n", M1);
    printf("Foram inseridos %d de Moedas de R$0,05\n", M5);
    printf("Foram inseridos %d de Moedas de R$0,10\n", M10);
    printf("Foram inseridos %d de Moedas de R$0,25\n", M25);
    printf("Foram inseridos %d de Moedas de R$0,50\n", M50);
    printf("Foram inseridos %d de Moedas de R$1,00\n", M1R);
    printf("O Valor total no Cofrinho é %2.2f\n", Valor_Total/100);

    system("Pause");
    return 0;   

}
