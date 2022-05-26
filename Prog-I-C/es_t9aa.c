#include <stdio.h>

float volume_esfera(float raioEsfera){
    
    //formula = 4/3 * 3.14159 * (raioEsfera ^ 3);
    
    float pi = 3.14159,
    potencia = 0,
    divisao = 4.0/3.0,
    valorVolume = 0;
    
    potencia = raioEsfera * raioEsfera * raioEsfera;
    
    valorVolume = (divisao * pi * potencia);
    
    return valorVolume;
    
}

int main(){
    
    float raioEsfera = 0,
    resultado = 0;
    
    scanf("%f" , &raioEsfera);
    
    resultado = volume_esfera(raioEsfera);
    
    printf("%0.2f\n", resultado);

    return 0;
}
