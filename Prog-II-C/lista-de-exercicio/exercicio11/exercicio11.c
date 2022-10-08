#include <stdio.h>
float calculaNotas(float n1, float n2, float n3, float n4, char pm);

float calculaNotas(float n1, float n2, float n3, float n4, char pm){
    float mediaAritimetica, mediaPonderada;
    if(pm == 'B'){
       return mediaAritimetica = ((n1 + n2 + n3 + n4) / 4);
    } else{
        return mediaPonderada = (((n1 * 5) + (n2 * 3) + (n3 * 2) + (n2 * 1)) / (5 + 3 + 2 + 1));
    }
}

int main(){
    float nota1, nota2, nota3, nota4, media;
    char parametro;

    printf("\nDigite o Parâmetro: \n[B] Média aritmética \n[A] Média ponderada\n");
    printf("Minha escolha: ");
    scanf("%c", &parametro);

     if ((parametro != 'A') && (parametro != 'B')){
        printf("Parametro Incorreto, execute o programa novamente\n");
        return 0;
    }

    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);

    printf("\nDigite a nota 4: ");
    scanf("%f", &nota4);

    if (parametro == 'B'){
        media = calculaNotas(nota1, nota2, nota3, nota4, parametro);
        printf("\nMédia Aritmética: %0.2f\n", media);

    } else if (parametro == 'A'){
        media = calculaNotas(nota1, nota2, nota3, nota4, parametro);
        printf("\nMédia Ponderada: %0.2f\n", media);
    }
    
    return 0;
}