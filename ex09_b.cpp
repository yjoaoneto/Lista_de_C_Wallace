/* b) caractere a caractere em ordem crescente dos �ndices (do come�opara o fim) */

#include <stdio.h>

int main(){

	//definindo a vari�vel
    char nome[200];

	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e sa�da
    for(int i = 0 ; nome[i] != '\0'; i++){
        printf("%c\n",nome[i]);
    }

}
