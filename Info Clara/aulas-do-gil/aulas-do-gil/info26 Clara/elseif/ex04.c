#include <stdio.h>

int main(){
  int op;
  double valor, saldo;
    printf("Digite seu saldo: ");
    scanf("%lf", &valor);

    printf("\n O que deseja efetuar?");
    printf("\n 1) Saque ");
    printf("\n 2) Deposito\n\t ");
    scanf("\n%i", &op);
  if(op == 1 ){
      printf("valor do saque: ");
      scanf("%lf", &valor);
      if(valor >= saldo){
        saldo = saldo - valor;
        printf("Novo saldo: %.2lf", saldo);
      }
      else{
        printf("saldo insuficiente!");
      }
  }
    else if(op == 2){
      printf("Valor do deposito: ");
      scanf("%lf", &valor);
      saldo = saldo + valor;
      printf("Novo saldo: %.2lf", saldo);
      }
    
  
    return 0;
}
