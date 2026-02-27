#include <stdio.h>

int main(){
  int a, b;
  int dia, mes;
  printf("Digite o dia e mes: ");
  scanf("%i %i", &dia, &mes);
  if (dia <= 31 ){ 
  
    if (mes == 12){
      printf("data = %i/dez", dia); 
    }
    else if (mes == 11){
      printf("data = %i/nov", dia); 
    }
     else if (mes == 10){
      printf("data = %i/out", dia); 
    }
     else if (mes == 9){
      printf("data = %i/set", dia); 
    }
     else if (mes == 8){
      printf("data = %i/ago", dia); 
    }
     else if (mes == 7){
      printf("data = %i/jul", dia); 
    }
     else if (mes == 6){
      printf("data = %i/jun", dia); 
    }
     else if (mes == 5){
      printf("data = %i/mai", dia); 
    }
     else if (mes == 4){
      printf("data = %i/abr", dia); 
    }
     else if (mes == 3){
      printf("data = %i/mar", dia); 
    }
     else if (mes == 2){
      printf("data = %i/fev", dia);
      if (dia > 28){
      printf("\n- Dia invalido! ");
      } 
    }
     else if (mes == 1){
      printf("data:  %i/jan", dia); 
    }
    else if (mes > 12){
      printf("- Mes invalido! ");
    }

  }
  else if(dia > 31 ){
    printf("- Dia invalido! ");

  }
  
 

  return 0;
}
   