/* Exercício 9

Escreva um algoritmo em C para ler seu nome completo.

Em seguida exiba o nome de três formas diferentes:

a) texto normal, utilizando a máscara de formatação string (%s)  */

#include <stdio.h>

int main(){
	
	//definindo a variável
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);
    
    //saída
    printf("o seu nome eh: %s",nome);
}
