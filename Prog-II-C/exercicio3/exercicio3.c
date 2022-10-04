#include <stdio.h>

int main(){
    int conjunto_1[10];
    int conjunto_2[10];

    for(int cont = 0; cont < 10; cont++){
        printf("Valor %d do conjunto 1: ", cont + 1);
        scanf("%d", &conjunto_1[cont]);
        conjunto_2[cont] = conjunto_1[cont] * conjunto_1[cont];
    }    

    printf("\nImpressão de ambos os conjuntos:\n");

     for(int cont = 0; cont < 10; cont++){
        printf("\nConjunto 1 na posição[%d]: %d\n", cont, conjunto_1[cont]);
        printf("Conjunto 2 na posição[%d]: %d\n", cont, conjunto_2[cont]);
    }   

    return 0;
}