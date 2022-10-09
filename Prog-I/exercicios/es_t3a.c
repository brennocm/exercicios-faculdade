/* Enunciado: Escreva	um	programa	que	leia	um	número	inteiro	e	imprima	na	tela	se	ele	é	par
ou	 ímpar.	O	 seu	 programa	 deve	 esperar	 que	 o	 usuário	 digite	 o	 número na	 entrada,	sem	
exibir nenhuma mensagem. Uma	vez	lida	a	entrada,	o	programa	deve	exibir,	saída,	apenas
os	termos	“par” ou	“impar” (sem	aspas ou	acentos),	seguidos	de	uma	quebra	de	linha.
 */

#include <stdio.h>

int main()
{
    int number;
    int calc;

    scanf("%i", &number);
    
    calc = (number % 2);
    
    if(calc != 0){
        printf("impar\n");
    } else {
        printf("par\n");
    }
    return 0;
}

