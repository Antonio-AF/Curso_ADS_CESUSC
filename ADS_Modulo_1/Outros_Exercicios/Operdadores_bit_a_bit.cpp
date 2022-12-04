// Operadores Bit a Bit.

/*

1 - ~ Complemento bit a bit  Exemplo: ~x;
2 - & E bit a bit  Exemplo: x & 167; 
3 - | OU bit a bit Exemplo: x | 129;
4 - ^ OU Exclusivo Exemplo x^127;
5 - << Deslocamento de bits a esquerda Exemplo x << 2;
6 - >> Deslocamento de bits a direita Exemplo x >> 2;

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	
	unsigned char x, y, z, j, k;
	
	unsigned char h[] = {10,11,12,13,14};
	unsigned int f;
	
	x = 44;
	printf("x = %d\n", x);
	
	y = ~x;
	printf("y = %d\n", y);
	
	x = 46;
	printf("x = %d\n", x);
	
	z = ~x;
	printf("z = %d\n", z);
	
	j = 10;
	k = ~j;
	
	printf("O Complemento de %d e %d\n", j, k);
	
	for(int i=0; i<5; i++){
		printf("%d", h[i]);
				
	}
	printf("\n\n");
	
	
	for(int i=0; i<5; i++){
		h[i] = ~h[i];
		printf("h[i] = %i", h[i]);
		
	}

	
	printf("\n\n");
		
	system("pause");
	return 0;
}
