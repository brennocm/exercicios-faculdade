/* Enunciado: Faça um programa que teste se uma palavra é um palíndromo, ou seja, se ela
pode ser lida da mesma forma tanto na ordem correta quanto na ordem invertida..
O usuário deverá entrar com uma string qualquer e a saída deverá ser “Esta palavra e um
palindromo” ou “Esta palavra nao e um palindromo”, conforme a entrada, seguida por uma
quebra de linha */

#include <stdio.h>
#include <string.h>

int main(){

    char leitura[30];
    int i = 0, comprimento = 0, compara = 0;

    scanf("%s", leitura);

    comprimento = strlen(leitura);
    comprimento = comprimento - 1;

    while(comprimento >= i){
        if(leitura[i] != leitura[comprimento]) 
            compara++;
            i++;
            comprimento--;
        
    }

    if(compara == 0){
        printf("Esta palavra e um palindromo\n");
        
    } else {
        printf("Esta palavra nao e um palindromo\n");
    }
    
    return 0;
}