/* f) exiba cada uma das palavras do seu nome do �ltimo para o primeiro em linhas diferentes */

#include <stdio.h>
#include <string.h>

int main(){

    
	//definindo a vari�vel
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e sa�da
    for(int i = strlen(nome)-1 ; i >= 0; i--){
            if(nome[i]==' '){
                printf("\n");
                i--;
            }
        printf("%c",nome[i]);
    }
}
