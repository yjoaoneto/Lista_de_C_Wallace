/* Exerc�cio 6

Em uma elei��o existem tr�s candidatos A, B, C.
Escreva um programa em C que efetue a apura��o dos votos e informe a quantidade de votos por candidatos,
a quantidade de eleitores, e a quantidade de votos nulos. */


#include <stdio.h>

int main(){
	
	//definindo as vari�veis
	int contA = 0,contB = 0,contC = 0,contN = 0,contNulo = 0,i = 10;
	char votos[10];
	
	//entrada
	printf("Bem-vindo as eleicoes 2022\n");
	printf("Voce tem 3 opcoes de candidatos [a-b-c] ou pode votar branco digitando 'd', caso nao digite nenhum desses seu voto sera contado como nulo.\n");
	
	//processamento
	for(int i = 0;i < 10;i++){
		printf("\nFaca sua votacao: ");
		scanf("%s", &votos[i]);
		if(votos[i] == 'a'){
			contA += 1;
			i += 1;
		}
		else if(votos[i] == 'b'){
			contB += 1;
			i += 1;
		}
		else if(votos[i] == 'c'){
			contC += 1;
			i += 1;
		}
		else if(votos[i] == 'd'){
			contN += 1;
			i += 1;
		}
		else{
			contNulo += 1;
			i += 1;
		}
		
	}
	
	//sa�da
	printf("\nQuantidades de votos no canditado A: %d", contA);
	printf("\nQuantidades de votos no canditado B: %d", contB);
	printf("\nQuantidades de votos no canditado C: %d", contC);
	printf("\nQuantidades de votos em branco: %d", contN);
	printf("\nQuantidades de votos nulo: %d", contNulo);
	
	
	return(0);
}
