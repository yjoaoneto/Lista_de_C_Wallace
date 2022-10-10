/* Exercício 1

 A funcionalidade do código é pedir um número ao usuário e exibi-lo na tela.

O código possui os seguintes erros:
-a falta do # e <> para incluir corretamente a biblioteca
-a falta de {} na função principal do código
-a falta do & para receber o valor digitado dentro da variável 'numero' */

#include <stdio.h>

int main(){
	
	int numero = 0;
	
	printf("Digite um nmr: ");
	scanf("%d", &numero);
	
	printf("O numero digitado foi %d", numero);
	
}
