/* d) converter toda string para letras mai�sculas e mostrar, e depoispara min�sculas e mostrar.
Pesquise e utilize as fun��es TOUPPER() eTOLOWER(). */

#include <stdio.h>
#include <ctype.h>

int main(){

    //definindo as vari�veis
    char nome[200];
	
	//entrada
    printf("Digite o seu nome: ");
    gets(nome);

	//processamento e sa�da
    for(int i = 0 ; nome[i] != '\0'; i++){
            printf("%c",toupper(nome[i]));
        }
    printf("\n");
    for(int i = 0 ; nome[i] != '\0'; i++){
            printf("%c",tolower(nome[i]));
        }
}
