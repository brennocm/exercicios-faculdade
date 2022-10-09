#include <stdio.h>
int modulo(int numeroModulo);

int modulo(int numeroModulo){
    numeroModulo = (numeroModulo) * (-1);

    return printf("O número em módulo:|%d|\n", numeroModulo);
}

int main(){
    int numero;

    printf("Digite o número analisado: ");
    scanf("%d", &numero);

        if(numero > 0){
            printf("O número já é positivo\n");
        } else {
            modulo(numero);
        }
        
    return 0;
}