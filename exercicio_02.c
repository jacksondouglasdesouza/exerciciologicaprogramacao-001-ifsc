#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  /*
  2)Sabendo que a instru��o
printf(?\n?);
faz com que o cursor da sa�da mude de linha, fa�a um
programa que forma a letra inicial do seu nome utilizando
sequencias de espa�o e a letra X. Ex.:

XXX
XXX
XXX
XXX
XXX
XXXXXXXXX
XXXXXXXXX

   */

  printf("               \n");
  printf("               \n");
  printf("  XXXXXXXXX    \n");
  printf("     XXX       \n");
  printf("     XXX       \n");
  printf("     XXX       \n");
  printf("     XXX       \n");
  printf(" XXX XXX       \n");
  printf(" XXX XXX       \n");
  printf(" XXXXXXX       \n");
  printf(" XXXXXXX       \n");
  printf("               \n");
  printf("@JacksonDouglasdeSouza\n");
  return 0;
}