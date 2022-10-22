#include <stdio.h>

int main(){
  int var1, var2, *point1, *point2;

  printf("\nDigite a variável 1: ");
  scanf("%d", &var1);
  printf("\nDigite a variável 2: ");
  scanf("%d", &var2);

  point1 = &var1;
  point2 = &var2;

  printf("%p\n", point1);
  printf("%p\n", point2);

  if(point1 > point2){
    printf("O endereço da variável 1 é o maior\n");
  } else {
    printf("O endereço da variável 2 é o maior\n");
  }

  return 0;
}