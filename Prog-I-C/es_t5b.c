/*Enunciado: Uma	 determinada	 loja	 comercializa	 10	 produtos	 diferentes.	 Escreva	 um	
programa	 que	 receba	 a	 quantidade	 vendida	 e	 o	 valor	 unitário	 de	 cada	 produto	 e	 os	
armazene	 em	 dois	 vetores.	 Após	 a	 leitura,	 o	 programa	 deve	 calcular	 o	 total	 de	 produtos	
vendidos, o	faturamento	total	da	loja e	exibi-los	na	tela.
O	usuário	irá	inserir	primeiramente	a	quantidade	de	cada	produto	vendido	um	por	vez	e,	em	
seguida,	o	valor	unitário	de	cada	produto,	também	da	mesma	maneira.
A	saída	do	seu	programa	deverá	exibir	o	que	se	pede	da	seguinte	maneira:
“O	lucro	foi	de	X	e	a	quantidade	de	produtos	vendidos	foi	de	Y”.	O	lucro	deve	ser	impresso	
com	3	casas	decimais.	Depois	da	mensagem	seu	programa	deve	conter	uma	quebra	de	linha.
*/

#include <stdio.h>

int main(){
    float valUnit[10], valorUnit = 0;
    int i = 0, ii = 0, quantVend[10], valorQuant = 0;
    
    for (i = 0; i < 10; i++){
        scanf("%d", &quantVend[i]);
        valorQuant = valorQuant + quantVend[i];
    }

        for (ii = 0 ; ii < 10; ii++){
            scanf("%f", &valUnit[ii]);
            valorUnit = valorUnit + (quantVend[ii] * valUnit[ii]);
        }
        
        printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", valorUnit, valorQuant);
    return 0;
}
