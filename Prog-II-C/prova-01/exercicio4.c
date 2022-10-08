#include <stdio.h>

int main(){
    int vetor[5];
    int vetorEspelhado[5];
    int cont2 = 5;

    for(int cont = 0; cont < 5; cont++){
        printf("Digite o valor %d do vetor: ", cont+1);
        scanf("%d", &vetor[cont]);
        vetorEspelhado[cont2] = vetor[cont];
        cont2--;
    }

    printf("Vetor espelhado:\n");
    for(int cont2 = 1; cont2 < 6; cont2++){
        printf("Posicão %d do vetor espelhado: %d\n", cont2, vetorEspelhado[cont2]);
    }
    return 0;
}