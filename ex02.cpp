/* Exerc�cio 2 

Ler 10 n�meros a serem digitados pelo usu�rio e armazene-os em um VETOR ou ARRAY. Em seguida:

a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.

b) Depois, pergunte ao usu�rio qual n�mero ele quer pesquisar (no lugar do n�mero 3), e diga quantas vezes este n�mero est� presente no vetor.

c) Diga qual � o maior dos 10 n�meros.

d) Diga qual � o menor dos 10 n�meros. */


#include <stdio.h>
#include <locale.h>
#define TamanhoArry 10


//criando uma fun��o a parte aonde o x vai armazenar o valor que iremos pesquisar
int count(int num[],int x){
    int soma=0;
    for(int i = 0;i<TamanhoArry;i++ ){
        if (num[i]==x){
             soma ++;
        }
    }
return soma;
}

int main(){
	
	
    //definindo as vari�veis
     int resl,resl2;
     int num[TamanhoArry];
     int maxi,menos,numeros;
     
     
    //processamento
     for (int i = 0; i<TamanhoArry ; ++i){

        printf("digite o numero: ");
        scanf("%d",&num[i]);

        if(i == 0){
            menos =num[0];
            maxi = num[0];


        }else if( maxi < num[i]){
            maxi=  num[i];
        }
        if(menos > num[i]){
            menos = num[i];

        }
     }
    
    //sa�da
     printf("Qual o numero voce quer pesquisar nesse vetor??\n>> ");
     scanf("%d",&numeros);


     resl=count(num,3);
     resl2 = count(num,numeros);
     printf("o numero 3 se repete essa quantidade de vezes %d\n",resl);
     printf("o numero %d se repete essa quantidade de vezes %d\n",numeros,resl);

     printf("O maior numero e %d \n",maxi);
     printf("A menor numero e %d",menos);


}
