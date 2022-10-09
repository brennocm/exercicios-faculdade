#include <stdio.h>
int nota(int notaALuno);

int nota(int notaALuno){
    if(notaALuno <= 6){
        return printf("\nReprovado\n");
    } else{
        return printf("\nAprovado\n");
    }
}

int main(){

    int nota1;

    printf("\nDigite a nota: \n");
    scanf("%d", &nota1);

    nota(nota1);
    
    
    return 0;
}