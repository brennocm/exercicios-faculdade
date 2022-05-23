/* Enunciado:	 Escreva	 um	 programa	 que	 contenha	 uma	 estrutura	 chamada	 “corpo”,	 com	 os	
campos	altura (tipo	float),	peso (tipo	float)	e	nome (tipo	string).	Este	programa	deve	ler	os	
dados	 de	 um	 usuário (altura,	 peso	 e	 nome),	 armazená-los	 em	 uma	 variável	 da	 estrutura	
corpo	e,	em	seguida,	acessar	estes	valores	armazenados,	calcular	o	IMC	(divisão	entre	peso	e	
o	quadrado	da	altura)	e	exibir	o	resultado	na	tela.
O	usuário	irá	inserir	seus	dados	um	de	cada	vez	na	seguinte	ordem:	
1)	altura
2)	peso
3)	nome
Seu	 programa	 deverá	 imprimir na	 tela	 somente	 o	 valor	 do	 IMC, com	 3	 casas	 decimais,	
seguido	de uma	quebra	de	linha. */

#include <stdio.h>
#include <math.h>

int main() {
    struct corpo{
        float altura;
        float peso;
        char nome[80];
    } alturaCorpo, pesoCorpo, nomeCorpo;
    
        scanf("%f", &alturaCorpo.altura);
        scanf("%f", &pesoCorpo.peso);
        scanf("%s", nomeCorpo.nome);
        
        printf("%.3f\n", (pesoCorpo.peso)/(alturaCorpo.altura * alturaCorpo.altura));

    return 0;
}
