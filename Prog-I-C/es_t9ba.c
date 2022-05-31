#include <stdio.h>

int procedimento(int a[10], int b[10]){
    for(int x = 0; x < 10; x++){
        int aux = a[x];
        int potencia = aux * aux * aux;
        b[x] = potencia;
        return printf("%i\n", b[x]);
    }
    
}

int main()
{
    int a[10], b[10];
    
    for(int x = 0; x < 10; x++){
        scanf("%d", &a[x]);

    }
    
    for(int y = 0; y < 10; y++){
        procedimento(a, b);
    }
    
    return 0;
}
