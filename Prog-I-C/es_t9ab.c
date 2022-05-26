#include <math.h>
#include <stdio.h>

int main()
{
    char escolha;
    float nota1,
          nota2,
          valorFinal;
          
    float media(char escolha, float nota1, float nota2);
    
    scanf("%c", &escolha);
    scanf("%f %f", &nota1, &nota2);
    
    valorFinal = media(escolha, nota1, nota2);
    
    printf("%0.3f\n", valorFinal);
    
    return 0;
}

float media(char escolha, float nota1, float nota2){
    float resultado = 0,
          produto = 0,
          expoente = 1.0 / 2.0;
    
     if(escolha == 'A'){
        resultado = (nota1 + nota2) / 2;
        
    } else if(escolha == 'B'){
        produto = nota1 * nota2;
        resultado = pow(produto, expoente);
    }
    
    return resultado;
}
