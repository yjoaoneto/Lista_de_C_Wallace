/* Exerc�cio 3

Um restaurante durante o m�s de fevereiro, armazenou diariamente aquantidade de refei��es vendidas.
Determine em que dia do m�s ocorreu o maior n�mero de vendas e qual foi a quantidade de refei��esvendida nesse dia.
A partir do enunciado, fa�a o planejamento conforme praticado em sala de aula.  */

#include <stdio.h>


int main(){
    
    //definindo as vari�veis
     int num[29];
     int max,menos,maisvendas=0;

	//entrada e processamento
     for (int i = 0; i<29; ++i){

        printf("no dia %d do mes de fevereiro, foram vendidos quantas refeicoes: ",(i+1));
        scanf("%d",&num[i]);

        if(i == 0){
            menos =num[0];
            max = num[0];


        }else if( max < num[i]){
            max=  num[i];
            maisvendas = i;
        }
        if(menos > num[i]){
            menos = num[i];

        }
     }

	//sa�da
     printf("O dia que teve mais vendas foi %d,nesse dia vendeu %d refeicoes\n",(maisvendas+1),max);
}
