/* Exerc�cio 8

 Fa�a um programa em C que receba o pre�o atual do produto e a vendam�dia mensal do produto e,
com base na regra que corresponde aosdados de entrada, calcule e mostre o novo pre�o */


#include <stdio.h>


int main(){
    
	//definindo as vari�veis
	
    int num,num2;
    int preco;


	//entrada
        printf("Digite um o preco do produto: ");
        scanf("%d",&num);

        printf("Digite a venda media mensal do produto: ");
        scanf("%d",&num2);

	//processamento e sa�da
        if(num<30 && num2<500){
            preco = num * 1.1;
            printf("o novo preco do produto eh: %d\n",preco);

        }else if( (80 > num) && (num >=30) && (500 <= num2 <= 1200)){
            preco = num * 1.2;
            printf("o novo preco do produto eh: %d\n",preco);

        }else if(num2 >= 1200 &&num >=80 ){
            preco = num -( num*0.2);
            printf("o novo preco do produto eh: %d\n",preco);

        }else{
            printf("Nao encaixa na tabela");

        }


}
