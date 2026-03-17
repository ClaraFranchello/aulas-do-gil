#include <stdio.h>

int main(){
  int v1, v2, soma, sub, div, mult; 
  

  printf("Digite dois valores inteiros: ");
  scanf("%i %i", &v1, &v2);

  soma = v1 + v2;
  printf("soma = %i", soma);

  sub = v1 - v2;
  printf("\nsubtração = %i", sub);

  div = v1 / v2;
  printf("\ndivisão = %i", div);

  mult = v1 * v2;
  printf("\nmultiplicação = %i", mult);

  return 0;
}

