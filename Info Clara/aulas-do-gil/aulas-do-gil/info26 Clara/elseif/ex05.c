#include <stdio.h>

int main(){
  float valor;
    printf("Valor: ");
    scanf("%f", &valor);

    if(valor > 0){
      printf("- Positivo!");
    }
    else if(valor < 0){

      printf("- Negativo!");
    }
    else{
      printf("- Neutro");
    }
  
    return 0;
}
