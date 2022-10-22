#include <stdio.h>

int main()
{
  int var_int = 10;
  float var_float = 20.5;
  char var_char = 'B';

  int *pointer_int;
  float *pointer_float;
  char *pointer_char;

  pointer_int = &var_int;
  pointer_float = &var_float;
  pointer_char = &var_char;

  printf("\nVariavel 1: %d\n", var_int);
  printf("Variavel 2: %0.1f\n", var_float);
  printf("Variavel 3: %c\n", var_char);

  *pointer_int = 15;
  *pointer_float = -8;
  *pointer_char = 'L';

  printf("\nVaríavel 1 modificada: %d\n", var_int);
  printf("Varíavel 2 modificada: %0.1f\n", var_float);
  printf("Varíavel 3 modificada: %c\n\n", var_char);

  return 0;
}