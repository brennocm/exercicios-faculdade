#include <stdio.h>

int soma(int x);

int main(){
  int analise, resultado;

  printf("Digite a quantidade de números analisados: ");
  scanf("%d", &analise);

  resultado = soma(analise);

  if(resultado == 0){
    printf("Quantidade incorreta\n");

  } else {
    printf("Resultado: %d\n", resultado);
  }

  return 0;
}

int soma(int x){

  if (x == 0){
    return 0;

  } else {
    return ((2 * x) - 1) + soma(x-1);

  }
}