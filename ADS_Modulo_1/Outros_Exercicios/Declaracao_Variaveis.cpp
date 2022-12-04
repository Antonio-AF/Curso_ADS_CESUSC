
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <iostream>

// Organização básica de programas C

        //  tipo nome(lista de argumentos) {
        //     declaracoes;
        //     comandos;
        //  }




int main(){

// Toda variável que for utilizada em uma função C deve ser previamente declarada. A forma geral de uma declaração de variável é:

    // tipo nome_da_variavel;
        // ou

    // tipo nome_variavel1, nome_variavel2;

    int um_inteiro;
    unsigned int outro_inteiro;
    char c1, c2;
    float SalarioMedio;
    double C,
            Y;
    int a = 12,
        b = 20;
    char c = 'Z';
    long int d =12345678L;

    um_inteiro = 13;
    outro_inteiro = 34;

    SalarioMedio = 2,344.45;

    C = 43,45;
    Y = 33,23;
    c1 = 'A';
    c2 = 'B';


    printf("Variavel um_inteiro: %d \n", um_inteiro);
    printf("Variavel um_inteiro: %d \n", b);
    printf("Variavel um_inteiro: %d %d \n", C, Y);
    printf("Variavel um_inteiro: %d \n", d);
    printf("Variavel um_inteiro: %d \n", a);
    printf("Variavel um_inteiro: %c %c \n", c1, c2);

	system("pause");
	return 0; 


}
