#include <math.h>
#include <stdio.h>

int main(){
    char operador;
    float n1,
          n2;
          
    //funções
    float adicao(float n1, float n2);
    float subtracao(float n1, float n2);
    float multiplicacao(float n1, float n2);
    float divisao(float n1, float n2);
    float potenciacao(float n1, float n2);
    
    scanf("%f%c%f", &n1, &operador, &n2);
    
    if(operador == '+'){
        printf("%0.3f\n", adicao(n1, n2));
        
    } else if(operador == '-'){
        printf("%0.3f\n", subtracao(n1, n2));
        
    } else if(operador == '*'){
        printf("%0.3f\n", multiplicacao(n1, n2));
        
    } else if(operador == '/'){
        printf("%0.3f\n", divisao(n1, n2));

    }  else if(operador == '^'){
        printf("%0.3f\n", potenciacao(n1, n2));
    
    }
          
    return 0;
}

float adicao(float n1, float n2){
    
    float resultado = n1 + n2;
    return resultado;
}

float subtracao(float n1, float n2){
    
    float resultado = n1 - n2;
    return resultado;
}

float multiplicacao(float n1, float n2){
    
    float resultado = n1 * n2;
    return resultado;
}

float divisao(float n1, float n2){
    
    float resultado = n1 / n2;
    return resultado;
}

float potenciacao(float n1, float n2){
    
    float resultado = pow(n1, n2);
    return resultado;
}
