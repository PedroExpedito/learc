/*  Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
 */

/* Acredito que da para fazer calculando metragem maiores porém como é apenas um exercio não foi feito */
#include <stdio.h>
int main(void)
{
    unsigned long int metros;
    unsigned long long int decimetro;
    unsigned long long int max = 184467440737095516; // maximo em 64 bit 

    printf("dijite o valor em metros : enter the value in meters.\n ");
    scanf("%llu",&metros);

    if (metros < max){
      decimetro = metros * 10;
      printf("Em decimetros: decimeters:  %lld \n", decimetro);
    }
    else{
      printf("ERRO Numero muito grande : ERROR very large number!!!");
    }
    return 0;
}