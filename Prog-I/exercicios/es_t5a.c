/*Enunciado: Escreva	um	programa	que	leia	20	notas (valores	reais	entre	0	e	10),	armazene-as	
em	um	vetor	e	então	diga	se	uma	determinada	nota	x digitada	pelo	usuário	existe	no	vetor.	
O	 programa	 deve	 repetir	 o	 procedimento	 de	leitura	 de	x e	 busca	 de	x no	vetor	até	 que	 o	
usuário	digite	um	valor	negativo.

O	 usuário	 irá	 inserir	 uma	 nota	 de	 cada	 vez	 e,	 após	 ter	 inserido	 as 20	 notas,	 o	 usuário	 irá	
inserir	a	nota	que	deseja saber	 se	está	ou	não	no	vetor.	Caso	a	nota	exista,	 seu	programa	
deverá	 exibir:	 “existe”	 seguido	 de	 uma	 quebra	 de	 linha	 e	 esperar	 que	 o	 usuário	 digite	 a	
próxima	nota	a	ser	encontrada.	Caso	a	nota	não	exista,	seu	programa	deverá	fazer	o	mesmo	
procedimento	com	a	mensagem:	“nao	existe”	(também	seguida	de	quebra	de	linha).
Quando	 o	 usuário	 inserir	 um	 valor	 negativo,	 seu	 programa	 deve	 parar	 a	 execução	 sem	
imprimir	nada	na	tela.
*/

#include <stdio.h>

int main() {
    float notas[20], pergunta;
    int i = 0, ii, regulador;
    
    for( ; i < 20; i++){
        scanf("%f", &notas[i]);
        
        if((notas[i] < 0) || (notas[i] > 10)){
            break;
        }
    }
    if (i == 20){   
        do{
           regulador = 0;
           scanf("%f", &pergunta);
           
            if(pergunta < 0){
                break;
            }
                
            for(ii = 0; ii < 20; ii++){
                if(pergunta == notas[ii]){
                    printf("existe\n");
                    regulador = 1;
                    break;
                }
            } if (regulador != 1){
               printf("nao existe\n");
            }
        } while (1);
    }
    return 0;
} 
