#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  /*
  1)Faça um programa que imprima o seu nome e sobrenome no formato (Sobrenome, Nome)
  */

  printf("Meu nome é: Jackson Douglas, de Souza\n");

  return 0;
}
