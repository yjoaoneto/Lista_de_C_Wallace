/* b) Pergunte ao usu�rio qual o tamanho do quadrado que ele quer queseja desenhado, e o desenhe. */

#include <stdio.h>

int main(){
	
	//definindo a vari�vel
    int Tamanho;
    
    //entrada
    printf("Qual o tamanho do quadrado? ");
    scanf("%d",&Tamanho);

	//processamento e sa�da
    for(int i = 0 ; i < Tamanho; i++){
            printf("\n\n\t");
        for(int i = 0 ; i < Tamanho; i++){
            printf("X\t");
        }
    }


}
