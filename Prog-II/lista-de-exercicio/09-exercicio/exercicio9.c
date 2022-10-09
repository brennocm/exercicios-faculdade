#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 5

int main(){
    int bingoCartela[TAMANHO][TAMANHO];
    srand(time(NULL));

    for(int x = 0; x < TAMANHO; x++){
        printf("\n");

        for(int y = 0; y < TAMANHO; y++){
            bingoCartela[x][y] = rand() % 100;

            if(bingoCartela[x + 1][y] != bingoCartela[x][y]){
                printf(" | %d | ", bingoCartela[x][y]);
            } else{
                do{
                    bingoCartela[x][y] = rand() % 100;
                } while(bingoCartela[x + 1][y] != bingoCartela[x][y]);
                printf(" | %d | ", bingoCartela[x][y]);
            }
        }
    }
    printf("\n");

    return 0;
}