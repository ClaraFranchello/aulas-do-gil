#include <stdio.h>

int main() {

    int lado1, lado2, lado3;

    printf("Digite tres numeros inteiros: ");
    scanf("%i %i %i", &lado1, &lado2, &lado3);

    if(lado1 == lado2 && lado2 == lado3 ){
        printf("Triangulo Equilatero\n");
    }
    else if(lado1 == lado2 && lado1 != lado3 && lado2 != lado3 || lado1 != lado2 && lado1 == lado3 && lado2 != lado3 || lado1 != lado2 && lado1 != lado3 && lado2 == lado3 ){
        printf("Triangulo Isosceles\n");
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("Triangulo Escaleno\n");
    }


    
    return 0;
}