/* e) exiba cada uma das palavras do seu nome em linhas diferentes. */

#include <stdio.h>
#include <ctype.h>

int main(){

   
	//definindo a vari�vel
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e sa�da
    for(int i = 0 ; nome[i] != '\0'; i++){
            if(nome[i]==' '){
                printf("\n");
                i++;
            }
            printf("%c",nome[i]);
        }

}
