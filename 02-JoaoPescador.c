#include <stdlib>
#include <stdio.h>

void main (){

/*

João papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de
seu trabalho. Toda vez que ele traz um peso de peixe maior que o estabelecimento pelo regulamento de pesca
do estado de São Paulo (50 quilos) deve pagar uma multa de de R$4,00 por kilo excedente. João precisa que 
você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar a variável 
excesso a quantidade de kilos além do limite e na variável multa o valor da multa que João deverá pagar.
Imprima os dados do programa com as mensagens adequadas 

*/
    float pesoTotal, excessoPeso, totalPagar;
     //entrada de dados
     printf("digite o peso dos peixes: ");
     scanf("%f",&pesoTotal);

    //processamento

    //> , >= , < , <= , == , !=

    if(pesoTotal>50){
        
        excessoPeso = pesoTotal - 50;
        totalPagar = excessoPeso * 4;
        pintf("Excesso de peso= %.2f \n",excessoPeso)
        pintf("Total a pagar= %.2f \n",totalPagar);
    }else{   
        pintf("voce nao precisa pagar multa. ")

    }
    
    //Saida de dados
     pintf("o peso digitado foi %.2f",pesoTotal);


}