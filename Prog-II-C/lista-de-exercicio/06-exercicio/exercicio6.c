#include <stdio.h>
#define TAMANHO 4

int main(){
    int matriz[TAMANHO][TAMANHO];

    for(int x = 0; x < TAMANHO; x++){
        for(int y = 0; y < TAMANHO; y++){
            matriz[x][y] = x*y;
        }
    }

    for(int x = 0; x < TAMANHO; x++){
        printf("\n");
        for(int y = 0; y < TAMANHO; y++){
            printf(" %d ", matriz[x][y]);
        }
    }
    printf("\n");
}



