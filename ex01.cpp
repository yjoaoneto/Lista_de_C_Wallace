/* Exerc�cio 1

 A funcionalidade do c�digo � pedir um n�mero ao usu�rio e exibi-lo na tela.

O c�digo possui os seguintes erros:
-a falta do # e <> para incluir corretamente a biblioteca
-a falta de {} na fun��o principal do c�digo
-a falta do & para receber o valor digitado dentro da vari�vel 'numero' */

#include <stdio.h>

int main(){
	
	int numero = 0;
	
	printf("Digite um nmr: ");
	scanf("%d", &numero);
	
	printf("O numero digitado foi %d", numero);
	
}
