#include <stdio.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int resolucao = (A[0] + A[1] + A[5]);

    printf("Soma dos valores das posições A[0], A[1] e A[5]: %d\n", resolucao);

    printf("Números da lista:");
    for(int x = 0; x < 6; x++){
        printf(" %d ", A[x]);
    }

    printf("\n");

    return 0;
}