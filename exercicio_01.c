#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  /*
  1)Fa�a um programa que imprima o seu nome e sobrenome no formato (Sobrenome, Nome)
  */

  printf("Meu nome �: Jackson Douglas, de Souza\n");

  return 0;
}
