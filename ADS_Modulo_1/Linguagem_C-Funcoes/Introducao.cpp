#include <stdio.h>
#include <iostream>

int main(){
    void imprimaMensagem(void); //Declarando a função na função main().
    

    imprimaMensagem();


    system("Pause");
    return 0;

}

// Criando a função nesse caso void esta como tipo primitivo.
void imprimaMensagem(void){ 
    printf("Hello world!");

    
}