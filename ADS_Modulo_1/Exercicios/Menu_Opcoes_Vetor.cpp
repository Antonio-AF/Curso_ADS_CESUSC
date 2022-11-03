/*1 - Construa um programa em C/C++ que tenha as seguintes opções de Menu:
1.1 - Leia um vetor de 10 posições com valores aleatórios 0-100 e na 
sequência selecione aleatoriamente trás posições/Índices deste vetor e 
apresente os seus valores e a multiplicação destes.
1.2 - Leia dois vetores de 5 posições com valores inteiros cada e gere um 
terceiro com os resultados da soma dos valores sendo a lógica: soma o 1ª 
elemento do 1ª vetor com o 5ª elemento do 2ª vetor, 2ª elemento do 1ª vetor 
com o 4ª elemento do 2ª vetor, e assim sucessivamente.
1.3 - Construa um vetor de 13 posições com valores caracteres aleatórios e na 
sequência pedir para o usuário digitar um caractere e localizar onde este está 
no vetor e quantas vezes aparece.*/

#include<conio.h> //inclusão da biblioteca conio - comandos I/O - Input/Output - Entrada e saída
#include<stdio.h> //inclusão da biblioteca stdio - comandos de tela I/O
#include<iostream>//inclusão da biblioteca mais completa
#include<locale.h>
#include<stdlib.h>

//declaração variáveis 

//variáveis do item 1.1
int Vetor[10]; 
int Pos1,Pos2,Pos3;
int ResultadoMult;
//variáveis do item 1.2
int VetorA[5],VetorB[5],VetorSoma[5];
//variáveis do item 1.3
char VetorC[13];
char caracter;
int QtasVezes;
//variável para opção do Menu
int opc;
//Início
main(){ //comando da estrutura - Escopo - principal do programa
setlocale (LC_ALL,"Portuguese");
Menu: //rótulo Menu
printf("\n \n");//pula duas linhas
printf("\n Menu de Opções");//construindo o Menu op��es
printf("\n 1 - Vetor de 10 Posições Aleatórios");
printf("\n 2 - Vetor de 5 posições - Soma");
printf("\n 3 - Vetor 13 posições caracteres aleatórios");
printf("\n 4 - Sair Sistema");
printf("\n Digite a opção desejada");
scanf("%i",&opc); //opc=getche();leitura da op��o do menu

switch (opc) {//ninho if - 
	case 1:{ printf("\n 1 - Vetor de 10 Posi��es Aleat�rios");
	         for(int i=0;i<10;i++){
	         	Vetor[i]= rand() % 101;
				 printf("\n Vetor[%i] = %i",i,Vetor[i]);}//gerar
	        
			printf("\n Digite a Pos1 desejada:");
			scanf("%i",&Pos1);
			printf("\n Digite a Pos2 desejada:");
			scanf("%i",&Pos2);
			printf("\n Digite a Pos3 desejada:");
			scanf("%i",&Pos3);
			printf("\n Vetor[%i] = %i",Pos1,Vetor[Pos1]);
			printf("\n Vetor[%i] = %i",Pos2,Vetor[Pos2]);
			printf("\n Vetor[%i] = %i",Pos3,Vetor[Pos3]);
			ResultadoMult = (Vetor[Pos1]*Vetor[Pos2]*Vetor[Pos3]);
			printf("\n ResultadoMult = %i",ResultadoMult);
		
		printf("\n Tecle enter para voltar ao Menu");
		getche();//fica esperando uma tecla
		goto Menu;// va para r�tulo Menu
		break;
	}
	case 2:{
		printf("\n 2 - Vetor de 5 posi��es - Soma");
	         printf("\n Entrada VetorA[5]"); 
			 for(int i=0;i<5;i++){
			 	printf("\n Entre com o valor inteiro VetorA[%i]",i);
	         	scanf("%i",&VetorA[i]);}//Entrada de dados
	         printf("\n \n");
			 printf("\n Entrada VetorB[5]"); 
			 for(int i=0;i<5;i++){
			 	printf("\n Entre com o valor inteiro VetorB[%i]",i);
	         	scanf("%i",&VetorB[i]);}//Entrada de dados
			
			 printf("\n \n");
			 printf("\n Soma dos Vetores");
			 for(int i=0;i<5;i++){	         
			  VetorSoma[i]=VetorA[i] + VetorB[4-i];
			  printf("\n VetorSoma[%i] = %i",i,VetorSoma[i]);
		    }
			printf("\n Tecle enter para voltar ao Menu");
	        getche();
			goto Menu; 
		break;
	}
	case 3:{
		printf("\n 3 - Vetor 13 posi��es caracteres aleat�rios");
		for(int i=0;i<13;i++){
			 VetorC[i]= rand() % 101;
			 printf("\n VetorC[%i] = %c",i,VetorC[i]);}//gerar
	   	fflush(stdin);
		printf("\n Digite um caracter para verificar no Vetor");
        scanf("%c",&caracter);
        fflush(stdin);
        int Encontrou=0;
        QtasVezes=0;
        for(int i=0;i<12;i++){
        	if(caracter == VetorC[i]){
        		printf("\n VetorC[%i] = %c",i,VetorC[i]);
                QtasVezes++;//QtasVezes=QtasVezes+1
                Encontrou=1;
        	}}
        printf("\n \n ");	
        if(Encontrou==0){
        	printf("\n caracter %c n�o existe no Vetor",caracter);
        }else{
        	printf("\n aparaceu o caracter %c %i vezes",caracter,QtasVezes);
        }
		
		printf("\n Tecle enter para voltar ao Menu");
		getche();
		goto Menu; 
		break;
	}
	case 4:{ exit(0);//sair do programa
		break;
	}
	default:{
		goto Menu;
    }
	
}//fecha Switch
}//fecha escopo do programa - algoritmo


