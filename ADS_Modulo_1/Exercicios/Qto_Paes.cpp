/* 
3. A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de
broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto deve guardar
numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos
para o dono. Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de
broas, e depois calcular os dados solicitados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

int main(){

    setlocale(LC_ALL, "Portuguese");


    int Qto_Paes, Qto_Broas;
    float Valor_Vendido, Poupanca;

    
    printf("Digite a quantidade de paes vendidos: ");
    scanf("%d", &Qto_Paes);
    
    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &Qto_Broas);

    Valor_Vendido = (Qto_Broas * 1,50) + (Qto_Paes * 0,12);
    Poupanca = (Valor_Vendido * 10)/100;

    printf("Valor total vendido de Paes e Broas foi: R$%.2f\n", Valor_Vendido);
    printf("O Valor a ser depositado na poupan�a �: R$%.2f\n", Poupanca);

    system("Pause");
    return 0;

}