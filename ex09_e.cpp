/* e) exiba cada uma das palavras do seu nome em linhas diferentes. */

#include <stdio.h>
#include <ctype.h>

int main(){

   
	//definindo a variável
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e saída
    for(int i = 0 ; nome[i] != '\0'; i++){
            if(nome[i]==' '){
                printf("\n");
                i++;
            }
            printf("%c",nome[i]);
        }

}
