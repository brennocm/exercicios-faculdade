#include <stdio.h>

int main(){
    int valores[6];

        for(int a = 0; a < 6; a++){
            printf("Digite o valor %d da sequencia: ", a + 1);
            scanf("%d", &valores[a]);
        }

        printf("Sequencia escolhida: \n");
        for(int a = 0; a < 6; a++){
            printf("%d\n", valores[a]);
        }

    return 0;
}