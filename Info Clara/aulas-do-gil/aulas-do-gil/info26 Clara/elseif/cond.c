#include <stdio.h>

int main(){  
  int v1, v2, res, op;

    printf("Digite dois valores: ");
    scanf("%i %i", &v1, &v2);

    printf("\n1 - soma");
    printf("\n2 - subtrair");
    printf("\n3 - multiplicar");
    printf("\n4 - dividir");
    printf("\nEscolha uma operação: " );
    scanf("%i", &op);
  if(op == 1){  
  
    res = v1 + v2;
    printf("soma = %i", res);

  }
  else if (op == 2){

    res = v1 - v2;
    printf("subtração = %i", res);

  }
  else if (op == 3){

    res = v1 * v2;
    printf("multiplicacao = %i", res);

  }
  else if (op == 4){

    res = v1 / v2;
    printf("Divisão = %i", res);
    
  }
  else{
    printf("Opção inválida!");
  }
return 0;
}

