/* f) exiba cada uma das palavras do seu nome do último para o primeiro em linhas diferentes */

#include <stdio.h>
#include <string.h>

int main(){

    
	//definindo a variável
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e saída
    for(int i = strlen(nome)-1 ; i >= 0; i--){
            if(nome[i]==' '){
                printf("\n");
                i--;
            }
        printf("%c",nome[i]);
    }
}
