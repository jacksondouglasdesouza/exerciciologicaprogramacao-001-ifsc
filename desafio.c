#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  /* DESAFIO: Observe as instru��es abaixo: printf("ab%dcd",27); imprime o texto substituindo o %d pelo n�mero contido ap�s a v�rgula (isto �, imprime ab27cd). Printf("xy%3dwz",65); faz o mesmo com o n�mero ocupando 3 posi��es da linha, alinhado no lado direito imprime xy 65wz). printf("*a%-4d*a",58); faz o mesmo com o n�mero ocupando 4 posi��es da linha, alinhado do lado esquerdo (*a58 *a). Usando estes recursos, elabore um programa que reproduza a figura ao lado: */

  printf("*%d%3 %d*\n", 1111, 1111);
  printf("*%-6d%-3d*\n", 111, 111);
  printf("*%-7d%-2d*\n", 11, 11);
  printf("*%-8d%-1d*\n", 1, 1);
  printf("*%1d%7d*\n", 11, 11);
  printf("*%3d%6d*\n", 111, 111);
  printf("*%d %d*\n", 1111, 1111);

  printf("\n@jacksonDouglasdeSouza");

  return 0;
}
