/*

2 - Desenvolver um programa que tenha um menu de:
2.1 - Entrada de dados dos vetores VetorA[5] e VetorB[5] com valores inteiros;
2.2 - Soma dos elementos dos dois vetores gerando o VetorSoma[5];
2.3 � Subtra��o dos elementos dos dois vetores gerando o VetorSub[5];
2.4 - Multiplica��o dos elementos dos dois vetores gerando o VetorMulti[5];
2.5 � Divis�o dos elementos dos dois vetores gerando o VetorDivi[5];
2.6 - Sair do Sistema


*/

#include<conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int VetorA[5], VetorB[5];
    int VetorSoma[5], VetorSub[5], VetorMult[5];
    float VetorDiv[5];
    int opc, elem;

    printf("\nDigite os 5 Elementos dos Vetores A e B. ");

    for (int i = 0; i < 5; i++){
        printf("\nDigite o %i� Elemento do VetorA: ", i + 1);
        scanf("%d", &elem);
        VetorA[i] = elem;
    }

    for (int i = 0; i < 5; i++){
        printf("\nDigite o %i� Elemento do VetorB: ", i + 1);
        scanf("%d", &elem);
        VetorB[i] = elem;
    }

    // Imprimindo os Vetores A e B

    printf("\n Imprimindo o VetorA: ");
    
	for (int i = 0; i < 5; i++){
        printf("\n VetorA[%i] = %i", i, VetorA[i]);
    }

    printf("\n Imprimindo o VetorB: ");
    
	for (int i = 0; i < 5; i++){
        printf("\n VetorB[%i] = %i", i, VetorB[i]);
    }
    
Menu:
    printf("\n \n");// pula duas linhas
    printf("\n Menu de Opções");// construindo o Menu op��es
    printf("\n 1 - Somar os Elementos VetorA e VetorB.");
    printf("\n 2 - Subtração os Elementos VetorA e VetorB.");
    printf("\n 3 - Multiplicação os Elementos VetorA e VetorB.");
    printf("\n 4 - Divisão os Elementos VetorA e VetorB.");
    printf("\n 5 - Sair do Sistema.");
    printf("\n Digite a opção desejada");
    scanf("%i", &opc);

    switch (opc){
        
        case 1:{
            for (int i = 0; i < 5; i++){
				
				VetorSoma[i] = VetorA[i] + VetorB[i];
                printf("\nA soma de VetorSoma[%i] = %i ", i, VetorSoma[i]);
                
            }

            printf("\n Tecle enter para voltar ao Menu: ");
            getche();
            break;
        }
        case 2:{
            for(int i = 0; i<5; i++){
                VetorSub[i] = VetorA[i] - VetorB[i];
                printf("\nA Subtração dos Elementos dos Vetores A e B são: ");
                printf("\nVetorSub[%i] = %i ", i, VetorSub[i]);
            }

            printf("\n Tecle enter para voltar ao Menu: ");
            getche();
            break;
        }
        case 3:{
            for(int i = 0; i<5; i++){
                VetorMult[i] = VetorA[i] * VetorB[i];
                printf("\nA Divisão dos Elementos dos Vetores A e B são: ");
                printf("\nVetorSub[%i] = %i ", i, VetorMult[i]);
            }
            
            printf("\n Tecle enter para voltar ao Menu: ");
            getche();
            break;
        }
        
		case 4:{
            for(int i = 0; i<5; i++){
                VetorDiv[i] = VetorA[i] / VetorB[i];
                printf("\nA Divisão dos Elementos dos Vetores A e B são: ");
                printf("\nVetorSub[%i] = %.2f ", i, VetorDiv[i]);
            }
            
            printf("\n Tecle enter para voltar ao Menu: ");
            getche();
            break;
        }     
        case 5:{

            exit(0); // sair do programa
            break;

        }
        default:{
        	
			goto Menu;
		} 
	}

}
