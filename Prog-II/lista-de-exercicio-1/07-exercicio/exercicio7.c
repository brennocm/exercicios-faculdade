#include <stdio.h>
#define TAMANHO 3

int main(){
    int matriz[TAMANHO][TAMANHO], acima, abaixo;

    for(int x = 0; x < TAMANHO; x++){
        for(int y = 0; y < TAMANHO; y ++){
            scanf("%d", &matriz[x][y]);
        }
    }
    
    acima = ((matriz[0][1] + matriz[0][2]) + matriz[1][2]);
    abaixo = ((matriz[1][0] + matriz[2][0]) + matriz[2][1]);

    printf("\nSoma dos elementos acima da diagonal principal: %d\n", acima);
    printf("\nSoma dos elementos abaixo da diagonal principal: %d\n", abaixo);
}

