/* Enunciado: Escreva	um	programa	que	imprima	o	quadrado	de	todos	os	números	inteiros	de	
1	a	20,	sendo	um	por	linha. Não	se	esqueça	da quebra	de	linha	na	última	impressão.
*/

#include <stdio.h>

int main()
{
    int cont;
    int quadrado;
    
     for(cont = 1; quadrado < 400; cont ++){
         quadrado = cont * cont;
         printf("%d\n", quadrado);
     }
    return 0;
}