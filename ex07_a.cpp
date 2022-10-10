/* Exercício 7

Escreva um algoritmo em C que faça a apresentação formatada de:

a) um quadrado de tamanho 5x5. */

#include <stdio.h>

int main(){

    for(int i = 0 ; i < 5; i++){
            printf("\n\n\t");
        for(int i = 0 ; i < 5; i++){
            printf("X\t");
        }
    }

	return(0);
}
	
	

