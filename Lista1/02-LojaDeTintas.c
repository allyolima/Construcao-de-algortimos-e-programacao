#include <stdlib.h>
#include <stdio.h>

void main (){
   
   float areaM2, quantLitrosTinta, quantLatas, precoTotal;

   printf("Digite os metros quadrados da area a ser pintada: ");
   scanf("%f", areaM2);

   quantLitrosTinta = areaM2 / 3;

   quantLatas = quantLitrosTinta/18;

   precoTotal = quantLatas * 80;

   printf("Quantidade de Latas: %.2f \n", quantLatas);
   printf("preco Total: R$ %.2f", quantLatas);

    



/*

Faça  um  programa  para  uma  loja  de  tintas.  O  programa  deverá  pedir  o tamanho  em  metros  quadrados  da  área  a  ser  pintada.  Considere  que  a cobertura da tinta
é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas
e o preço total.

*/




}


