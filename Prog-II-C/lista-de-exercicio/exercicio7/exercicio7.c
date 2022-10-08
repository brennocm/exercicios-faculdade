#include <stdio.h>

int main(){
    int matriz[3][3], soma;

    for(int cont = 0; cont < 3; cont++){
        for (int cont2 = 0; cont < 3; cont++){
            scanf("%d", &matriz[cont][cont2]);
        }
    }
    
    soma = ((matriz[0][1] + matriz[0][2]) + matriz[1][2]);

    printf("\nSoma: %d\n", soma);
}