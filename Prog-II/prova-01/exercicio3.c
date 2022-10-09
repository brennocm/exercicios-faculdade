#include <stdio.h>

int main(){
    int valores[6];
    int maior_valor = 0;
    int menor_valor;
    int total = 0;
    int media;
    int cont = 1;
    int sequencia1;

    printf("Digite o número 1 da sequencia: ");
    scanf("%d", &sequencia1);
    menor_valor = sequencia1;

    do {
        
        printf("Digite o número %d da sequencia: ", cont + 1);
        scanf("%d", &valores[cont]);
            if(valores[cont] < menor_valor){
                menor_valor = valores[cont];

            } else if (valores[cont] > cont){
                maior_valor = valores[cont];
            }
        
        total = total + valores[cont];
        cont++;

    } while(cont != 6);

    total = total + sequencia1;

    media = (total / 6);

    printf("\nO maior valor é: %d\n", maior_valor);
    printf("\nO menor valor é: %d\n", menor_valor);
    printf("\nA media é: %d\n", media);

    return 0;
}