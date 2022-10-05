#include <stdio.h>

int main(){
    int vetor[10], maior, menor;

    scanf("%d", &vetor[0]);
    maior = vetor[0];
    menor = vetor[0];

    for(int cont = 1; cont < 10; cont++){
        scanf("%d", &vetor[cont]);

            if (vetor[cont] < menor){
                menor = vetor[cont];
            }
            else if (vetor[cont] > maior){
                maior = vetor[cont];
            }
    }

    printf("\nMenor número encontrado: %d", menor);
    printf("\nMaior número encontrado: %d\n", maior);

    return 0;
}