#include <stdlib.h>
#include <stdio.h>

void main (){

/*

 Faça um Programa que peça as 4 notas bimestrais e mostre a média

*/

      float primeiroBimestre, segundoBimestre, terceiroBimestre, quartoBimestre, mediaFinal;

    //entrada de dados
    printf("Digite a nota do primeiro bimestre: ");
    scanf("%f", &primeiroBimestre);
    printf("Digite a nota do segundo bimestre:  ");
    scanf("%f", &segundoBimestre);
    printf("Digite a nota do terceiro bimestre");
    scanf("%f", &terceiroBimestre);
    printf("Digite a nota do quarto bimestre:  ");
    scanf("%f", &quartoBimestre);

    //processamento
     
        mediaFinal= (primeiroBimestre + segundoBimestre + terceiroBimestre + quartoBimestre)/4;
        
    //saida de dados

    printf("Media final = %.1f\n", mediaFinal);

     
}