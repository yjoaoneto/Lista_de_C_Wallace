/* c) caractere a caractere em ordem decrescente dos índices (do fim parao começo). */

#include <stdio.h>
#include <string.h>

int main(){

	//definindo a variável
    char nome[200];

	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e saída
    for(int i = strlen(nome) ; i >= 0; i--){
        printf("%c",nome[i]);
    }
}
