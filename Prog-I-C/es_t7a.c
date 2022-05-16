/* Enunciado: Escreva um programa que leia uma string qualquer (máximo 80 caracteres) e
imprima na tela a sua versão espelhada, ou seja, a mesma string mas com a ordem dos
caracteres invertida.
O usuário deverá entrar com uma string qualquer e a saída deverá exibir somente a string
invertida, seguida de uma quebra de linha */

#include <stdio.h>
#include <string.h>

int main() {
    char analise[80];
    int i = 0; 
    
    fgets(analise, 80, stdin);
    
    analise[strcspn(analise, "\n")] = 0;
    
    for(i = strlen(analise)-1; i >= 0; i --){
        printf("%c", analise[i]); 
        
    }
    
    printf("\n");

    return 0;
}


