#include <stdio.h>

int main(){
    int tabuada;
    int x;

    printf("\nSelecione a tabuada: \n");
    scanf("%d", &tabuada);

    if(tabuada % 2 != 0){
        printf("ERRO: O número escolhido é impar\n");
    } else {
        for(int cont = 0; cont < 11; cont++){
        x = tabuada * cont;
        printf("%d X %d: %d\n", tabuada, cont, x);
    }
    }
    
    return 0;
}