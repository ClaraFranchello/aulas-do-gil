#include <stdio.h>

int main(){
  int a, b, c, d;
  float frequencia, media;
  printf("Digite sua frequencia: ");
  scanf("%f", &frequencia);

  if(frequencia >= 75){

    printf("Notas:");
    scanf("%i %i %i %i", &a, &b, &c, &d);
    
    media = (a + b + c + d)/4;
    printf("%f", media);

    if(media < 60){
      printf("\nINAPTO por media%f", media);
    }

    else if(media >= 60){
      printf("\n- APTO %f", media);
    }
    
  }
  else if(frequencia < 75){
    printf("\nINAPTO por falta");
  }

  return 0;
}
   