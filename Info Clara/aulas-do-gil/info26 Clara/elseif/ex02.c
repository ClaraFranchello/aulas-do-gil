#include <stdio.h>

int main(){
  int temperatura;  
    
    printf("Temperatura atual ºC: ");
    scanf("%i", &temperatura);
  if (temperatura< 18){

      printf("- Clima frio!");

  }
  else if( temperatura > 25){

      printf("- Clima quente!");

  }
  else{ 

      printf("- Clima agradável");

  }
    return 0;
}
