/* c) caractere a caractere em ordem decrescente dos �ndices (do fim parao come�o). */

#include <stdio.h>
#include <string.h>

int main(){

	//definindo a vari�vel
    char nome[200];

	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e sa�da
    for(int i = strlen(nome) ; i >= 0; i--){
        printf("%c",nome[i]);
    }
}
