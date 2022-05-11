/*Enunciado: Escreva	 um	 programa	 que	 carregue	 dois	 vetores	 com	 10	 valores	 inteiros	 cada	
um	e	mostre	o	vetor	resultante	da	intercalação	destes	dois	vetores.
O	usuário	irá	inserir	os	10	valores	do	primeiro	vetor,	um	de	cada	vez	e,	em	seguida,	os	10	
valores	do	segundo	vetor,	também	um	de	cada	vez.
A	 saída	 do	 seu	 programa	 deverá	 exibir	 o	 vetor	 resultante	 da	 intercalação	 com	 seus	
elementos	separados	por	“|”. Coloque uma	quebra	de	linha	no	final.
*/

#include <stdio.h>

int main(){
    int vet1[10], vet2[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet1[i]);
    }
    
    for(int ii = 0; ii < 10; ii++){
        scanf("%d", &vet2[ii]);
    }
    
    for(int iii = 0; iii < 10; iii++){
        printf("%d|%d|", vet1[iii], vet2[iii]);
    }
    printf("\n");
}
