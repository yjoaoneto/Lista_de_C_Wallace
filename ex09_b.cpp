/* b) caractere a caractere em ordem crescente dos índices (do começopara o fim) */

#include <stdio.h>

int main(){

	//definindo a variável
    char nome[200];

	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e saída
    for(int i = 0 ; nome[i] != '\0'; i++){
        printf("%c\n",nome[i]);
    }

}
