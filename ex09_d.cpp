/* d) converter toda string para letras maiúsculas e mostrar, e depoispara minúsculas e mostrar.
Pesquise e utilize as funções TOUPPER() eTOLOWER(). */

#include <stdio.h>
#include <ctype.h>

int main(){

    //definindo as variáveis
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e saída
    for(int i = 0 ; nome[i] != '\0'; i++){
            printf("%c",toupper(nome[i]));
        }
    printf("\n");
    for(int i = 0 ; nome[i] != '\0'; i++){
            printf("%c",tolower(nome[i]));
        }
}
