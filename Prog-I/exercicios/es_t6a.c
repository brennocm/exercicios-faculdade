/* Enunciado: Escreva	 um	 programa	 que  receba	 do	 usuário	 as	 dimensões	 NUM_LIM	 e	
NUM_COL (máximo	 20)	 e	 os	 dados	 de	 uma	 matriz	 bidimensional,	 e	 imprima	 a	 matriz	
transposta	na	tela.	
O	 usuário	 deverá	 entrar	 com	 os	 dados	 NUM_LIN	 e	 NUM_COL	 separados	 por	 espaço.	 Em	
seguida,	este	deverá	entrar	com	um	elemento	da	matriz	por	vez,	sendo	que	estes	deverão	
estar	 na	 seguinte	 ordem:	 o	 primeiro	 elemento	 da	 primeira	 linha,	 uma	 quebra	 de	 linha,	 o	
segundo	elemento	da	primeira	linha,	uma	quebra	de	linha	e	assim	sucessivamente.	
A	 saída	 deverá	 exibir	 somente	 a	 matriz	 transposta	 desta	 matriz.	 Os	 elementos	 da	 mesma	
linha	 deverão	 ser	 separados	 por	 espaço	 e	 os	 elementos	 de	 diferentes	 linhas	 deverão	ser	
exibidos	 em	 linhas	 diferentes. No	 final,	 sua	 saída	 deverá	ser	 seguida	 por uma	 quebra	 de	
linha */

#include <stdio.h>
#define Nmatriz 20

int main() {
    
    int linha = 0, coluna = 0, nlinha = 0, ncoluna = 0;
    int matriz [Nmatriz] [Nmatriz];
    
    scanf("%d %d", &nlinha, &ncoluna);
    
    for(linha = 0; linha < nlinha; linha++){
        
        for(coluna = 0; coluna < ncoluna; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    for(coluna = 0; coluna < ncoluna; coluna++){
        
        for(linha = 0; linha < nlinha; linha++){
            printf("%d ", matriz[linha][coluna]); 
        }
        printf("\n");
    }
    return 0;
}
