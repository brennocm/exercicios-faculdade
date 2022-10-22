#include <stdio.h>

int main(){
  int var1, var2, *point1, *point2;

  var1 = 10;
  var2 = 8;

  point1 = &var1;
  point2 = &var2;

  if(point1 > point2){
    printf("O endereço da variável 1 é o maior\n");
  } else{
    printf("O endereço da varíavel 2 é o maior\n");
  }

  return 0;
}