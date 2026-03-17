#include <stdio.h>

int main(){
  double saldo, saque;
    printf("Digite seu saldo: ");
    scanf("%lf", &saldo);
    
  if(saldo > 0 ){
    printf(" Valor do saque: ");
    scanf("%lf", &saque);

    if(saque <= saldo){
      saldo = saldo - saque;
      printf("Novo saldo: %.2lf", saldo);
    }
      else{
    printf("Saldo insuficiente! ");
    }
  }
  else{
    printf("Saldo insuficiente! ");
  }
  

    return 0;
}
