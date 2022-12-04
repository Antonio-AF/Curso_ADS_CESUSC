/*
Construa um algoritmo em c que leia n notas de uma aluno e calcule a media.
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <iostream>



int main(){
	
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int N_Nota;
    float Nota;
    float Media;
    char Aluno[1];
    
    

    printf("Qual o nome do aluno: ");
    scanf("%s", &Aluno);
    

    printf("Qual a quantidade de Notas? ");
    scanf("%i", &N_Nota);

    Media = 0;
    for(int i=1; i<=N_Nota; i++){

        printf("Digite a Nota[%i]:\n ", i);
        scanf("%f", &Nota);

        Media = Media + Nota;
        printf("%f", Media);      
       
    }
	
	Media = Media/N_Nota;   

    printf("O Aluno %s", Aluno);
    printf("Com %d Notas", N_Nota);
    printf("Possui a media %f", Media);

    system("Pause");
    return 0;
}
