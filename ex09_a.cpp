/* Exerc�cio 9

Escreva um algoritmo em C para ler seu nome completo.

Em seguida exiba o nome de tr�s formas diferentes:

a) texto normal, utilizando a m�scara de formata��o string (%s)  */

#include <stdio.h>

int main(){
	
	//definindo a vari�vel
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);
    
    //sa�da
    printf("o seu nome eh: %s",nome);
}
