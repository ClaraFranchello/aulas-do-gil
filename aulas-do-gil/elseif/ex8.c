#include <stdio.h>

int main(){

  float a;
  printf("Digite sua média: ");
  scanf("%f", &a);

  if(a >= 9){

    printf("(A)");

  }else if(a >= 8){
    
    printf("(B)");

  }else if(a >= 6){

    printf("(C)");
    
  }else {
    printf("(D)");

  }
  



  return 0;


}
   