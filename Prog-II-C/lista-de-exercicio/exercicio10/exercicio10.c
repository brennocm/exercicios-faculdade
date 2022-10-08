#include <stdio.h>

int comparaSalario(float s1, float s2);

int comparaSalario(float s1, float s2){
    if(s1 > s2){
        return 1;
    } else {
        return 2;
    }
}

int main(){
    float salario1, salario2;
    int x;

    printf("Digite o salário do funcionário 1: ");
    scanf("%f", &salario1);

    printf("Digite o salário do funcionário 2: ");
    scanf("%f", &salario2);

    x = comparaSalario(salario1, salario2);

    if (x == 1){
        printf("O funcionário 1 possui o maior salário\n");
    } else {
        printf("O funcionário 2 possui o maior salário\n");
    }
        
    return 0;
}