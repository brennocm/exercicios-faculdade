#include <stdio.h>

int main(){
    int matriz[4][4], valoresMaioresqueDez = 0;

    for (int cont = 0; cont < 4; cont++){
        for (int contx = 0; cont < 4; cont++){
                scanf("%d", &matriz[cont][contx]);
                    if(matriz[cont][contx] > 10){
                        valoresMaioresqueDez++;
                    }
        }
    }

    printf("A matriz em questão possui %d valor(es) maiores que 10: \n", valoresMaioresqueDez);

    return 0;
}