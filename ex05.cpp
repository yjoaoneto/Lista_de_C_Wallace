/* Exerc�cio 5

Escreva um programa que leia o valor de 4 n�meros inteiros.
Em seguida, dever� ser apresentado o resultado da multiplica��o do primeiro n�mero com o terceiro n�mero lido,
e a soma do segundo n�mero com o quarto n�mero lido.
*/

#include <stdio.h>

int main(){
	
	//definindo as vari�veis
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
	
	//sa�da
	printf("\nA multiplicacao do primeiro numero pelo terceiro eh: %d", multiplicacao);
	printf("\nA soma do segundo numero com o quarto eh: %d", soma);
	
	
	return(0);
}
