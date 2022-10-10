/* Exercício 5

Escreva um programa que leia o valor de 4 números inteiros.
Em seguida, deverá ser apresentado o resultado da multiplicação do primeiro número com o terceiro número lido,
e a soma do segundo número com o quarto número lido.
*/

#include <stdio.h>

int main(){
	
	//definindo as variáveis
	int num1,num2,num3,num4,soma,multiplicacao;
	
	//entrada
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num3);
	printf("\nDigite o quarto numero: ");
	scanf("%d", &num4);
	
	//processamento
	multiplicacao = (num1 * num3);
	soma = (num2 + num4);
	
	//saída
	printf("\nA multiplicacao do primeiro numero pelo terceiro eh: %d", multiplicacao);
	printf("\nA soma do segundo numero com o quarto eh: %d", soma);
	
	
	return(0);
}
