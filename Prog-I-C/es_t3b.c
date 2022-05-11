/* Enunciado: Escreva	um	programa	que	leia	uma	data	no	formato	dd/mm/aaaa e	escreva	esta	
data	 com	 o	mês	expresso	por	extenso. Caso	 o	mês	 digitado	 não	 seja	válido	 (por	exemplo,
22/13/1980),	seu	programa	deverá	exibir	a	seguinte	mensagem:	"Mes	invalido" (sem	aspas	
e	acentos) e	encerrar a	execução. Imprima	sempre	uma	quebra	de	linha	ao	final	da	saída	do	
seu	programa. 
*/

#include <stdio.h>

int main()
{
    int day, month, yr;

    scanf("%d/%d/%d", &day, &month, &yr);
    
    switch (month){
    case 1:
        printf ("%d de janeiro de %d\n", day, yr);
        break;
    
    case 2:
        printf ("%d de fevereiro de %d\n", day, yr);
        break;
    
    case 3:
        printf ("%d de março de %d\n", day, yr);
        break;
    
    case 4:
        printf ("%d de abril de %d\n", day, yr);
        break;
    
    case 5:
        printf ("%d de maio de %d\n", day, yr);
        break;
    
    case 6:
        printf ("%d de junho de %d\n", day, yr);
        break;
    
    case 7:
        printf ("%d de julho de %d\n", day, yr);
        break;
        
    case 8:
        printf ("%d de agosto de %d\n", day, yr);
        break;
        
   case 9:
        printf ("%d de setembro de %d\n", day, yr);
        break;
        
   case 10:
        printf ("%d de outubro de %d\n", day, yr);
        break;
        
    case 11:
        printf ("%d de novembro de %d\n", day, yr);
        break;
        
     case 12:
        printf ("%d de dezembro de %d\n", day, yr);
        break;
        
    default:
        printf ("Mes invalido\n");
  }
    
    return 0;
}
