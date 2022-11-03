// Definindo fun��es

#include <stdio.h>
#include <stdlib.h>

// Definindo a Fun��o que far� a soma dos Vetores.
SomaVetor(int Vet[], int size){ // Vet e Size s�o par�metros passados para a fun��o.
	
	int Soma; // Variavel local da Fun��o para a Soma.
	
	Soma = 0;
	
	// For para iterar sobre os elementos do vetor e somar os elementos.
	for(int i=0; i<size;i++){ 
		Soma = Soma+Vet[i];
	}
	
	return Soma;
	
}

int main(){
	
	int Z[100], V[100]; // Z e V S�o os vetores.
	int n, m; // As vari�veis n e m s�o os tamanhos dos vetores (Podemos obter esse tamanho automatico).
	int SomaVetor_Z, SomaVetor_V; // As variaveis que guardaram a soma realizada pela fun��o.
	
	
	// Mensagem para o usu�rio informar o tamanho do Vetor.
	printf("Entre com o tamanho do vetor Z (Menor que 100): ");
	scanf("%d", &n);
	
	// For para ler os elementos passados pelo usu�rio e adiciona-los no vetor Z.
	for(int i=0; i<n; i++){
		printf("Entre com o elemento com indice %d do vetor Z: ", i);
		scanf("%d", &Z[i]);
	}
	
	// Nesse comando atribuiremos o valor somado pela fun��o a vari�vel SomaVetor_Z
	SomaVetor_Z = SomaVetor(Z, n);
	
	printf("Soma dos elementos do vetor Z: %d\n", SomaVetor_Z);
	
	// Mensagem para o usu�rio informar o tamanho do Vetor.
	printf("Entre com o tamanho do vetor V (Menor que 100): ");
	scanf("%d", &m);
	
	
	// For para ler os elementos passados pelo usu�rio e adiciona-los no vetor V.
	for(int i=0; i<m; i++){
		printf("Entre com o elemento com indice %d do vetor V: ", i);
		scanf("%d", &V[i]);	
		
	}
	
	// Nesse comando atribuiremos o valor somado pela fun��o a vari�vel SomaVetor_V
	SomaVetor_V = SomaVetor(V, m);
	
	printf("Soma dos elementos do vetor V: %d\n", SomaVetor_V);
	
}
