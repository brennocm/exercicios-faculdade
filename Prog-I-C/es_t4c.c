/* Enunciado: Usando	as	estruturas	de	loop vistas	em	aula,	escreva	um	programa	que	leia	dez	
números	inteiros	quaisquer e	imprima	na	tela	quantos	destes	números	são	pares	e	quantos	
são	ímpares (no	formato	ilustrado	abaixo,	seguido	de	uma	quebra	de	linha).
*/

#include <stdio.h>

int
main ()
{
  int maxContagem = 0, placarPar = 0, placarImpar = 0, entrada = 0;

  for (maxContagem = 0; maxContagem != 10; maxContagem++)
    {
      scanf ("%d", &entrada);

      if (entrada % 2 == 0)
	{
	  placarPar = placarPar + 1;
	}
      else
	{
	  placarImpar = placarImpar + 1;
	}
    }

  printf ("%d pares, %d impares\n", placarPar, placarImpar);

  return 0;
}
