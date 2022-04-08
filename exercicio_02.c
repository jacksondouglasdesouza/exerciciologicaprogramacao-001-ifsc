#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  /*
  2)Sabendo que a instrução
printf(?\n?);
faz com que o cursor da saída mude de linha, faça um
programa que forma a letra inicial do seu nome utilizando
sequencias de espaço e a letra X. Ex.:

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