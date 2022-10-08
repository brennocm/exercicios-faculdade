/*
Enunciado: O	número	de	combinações	de	n objetos	diferentes	onde	s objetos	são	escolhidos	
de	cada	vez	é	dado	pela	seguinte	fórmula:
Escreva	um	programa	que	calcule	o	número	de	combinações	de	n objetos	tomados	s de	cada	
vez.	O	usuário	irá	inserir	o	valor	de	n e	s,	respectivamente,	da	seguinte	maneira:

• Inserir	valor	de	n e	pressionar	enter.
• Inserir	o	valor	de	s e	pressionar	enter.

Seu	 programa	 deverá	 mostrar	 apenas	 o	 resultado	 da	 combinação	 no	 final	 da	 execução,	
seguido	por	uma	quebra	de	linha.
*/

#include <stdio.h>

int main() {
    int nFatorial = 0, sFatorial = 0, nsFatorial = 0;
    int n, s, nS, resultadoFormula;
    
    
    scanf("%d", &n);
    scanf("%d", &s);
    
    nS = (n - s);
    
    //Fatorial de N
   for(nFatorial = 1; n > 1; n = n - 1){
    nFatorial = nFatorial * n;
   }
   
   //Fatorial de S
   for(sFatorial = 1; s > 1; s = s - 1){
    sFatorial = sFatorial * s;
   }
   
   //Fatorial de N - S
   for(nsFatorial = 1; nS > 1; nS = nS - 1){
    nsFatorial = nsFatorial * nS;
   }
   
   //Formula 
   resultadoFormula = (nFatorial / (sFatorial * (nsFatorial)));
   
    //Debbug
    // printf("%d\n", nFatorial);
    //printf("%d\n", sFatorial);
    //printf("%d\n", nsFatorial);
    
    printf("%d\n", resultadoFormula);
}
