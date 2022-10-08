#include <stdio.h>

int main(){
    int matriz[3][3];
    int multiplicacao;
    int matriz_multiplicacao[3][3];
    
    for(int cont = 0; cont < 3; cont++){
        for(int cont2 = 0; cont2 < 3; cont2++){
            scanf("%d", &matriz[cont][cont2]);
            multiplicacao = (matriz[cont][cont2] * 2);
            matriz_multiplicacao[cont][cont2] = multiplicacao;
        }
    }

    printf("\nMatriz multiplicada: \n");
     for(int cont =0; cont < 3; cont++){
        for(int cont2 = 0; cont2 < 3; cont2++){
          printf(" %d ", matriz_multiplicacao[cont][cont2]);
       }
    }
    return 0;
}