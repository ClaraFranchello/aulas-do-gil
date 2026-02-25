#include <stdio.h>
#include <math.h>

  int main(){
  
    int co, ca;
    double raiz, pot;
    printf("Digite o valor dos catetos ");
    scanf("%i %i", &co, &ca);

    pot = pow(co, 2) + pow(ca, 2);
    raiz = sqrt(pot);

    printf("\nO valor da hipotenusa é: %.2lf", raiz);
    
    return 0;
  }
  