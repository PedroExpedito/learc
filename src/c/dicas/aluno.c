/*Gabriel inventou um código para representar números naturais, usando uma
sequência de zeros e uns. Funciona assim, o número natural é representado pela
quantidade de vezes que o padrão “100” aparece na sequência.

Por exemplo, na sequência 11101001010011110, o padrão aparece duas vezes e na
sequência 11101010111110111010101 ele não aparece nenhuma vez. Você deve ajudar
Gabriele implementar um programa que, dada a sequência de zeros e uns, calcule
quantas vezes o padrão “100” aparece nela. Entrada

A primeira linha da entrada contém um inteiro NNN, o tamanho da sequência. A
segunda linha contém a sequência de NNN zeros e uns, separados por espaço em
branco. Saída

Seu programa deve imprimir um inteiro, quantas vezes o padrão “100” aparece na
sequência. Restrições

    1≤N≤1041 \leq N \leq 10^41≤N≤10*/

#include <stdio.h>
int main(void) {
  unsigned short int entradas;
  scanf("%hu", &entradas);
  char numeros[entradas * 2];
  for (int j=0; j < entradas * 2;j++){
    scanf("%c",&numeros[j]);
  }
  printf("%s",numeros);
  int valor = 0;
  for (int i = 0; i < entradas * 2; i += 0) {

    if (numeros[i] == '1') {
      i += 2;
      if (numeros[i] == '0') {
        i += 2;
        if (numeros[i] == '0') {
          valor++;
        }
      }
    }
    else{i++;}
  }
  printf("%d", valor);
}
