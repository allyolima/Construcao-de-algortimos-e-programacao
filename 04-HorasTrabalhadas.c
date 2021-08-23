#include <stdlib.h>
#include <stdio.h>

void main (){

    /*
    
     Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

    */       

        float pagamentoPorHora, horasTrabalhadas, salarioFinal; 

        //entrada de dados
        printf("Quanto voce ganha por hora:  ");
        scanf("%f", pagamentoPorHora);
        printf("Quantas horas foram cumpridas esse mes: ");
        scanf("%f", horasTrabalhadas);

        //processamento

        salarioFinal = pagamentoPorHora * horasTrabalhadas;

        //saida de dados
        printf("Salario do referido mes: %.1f\n", salarioFinal);




}