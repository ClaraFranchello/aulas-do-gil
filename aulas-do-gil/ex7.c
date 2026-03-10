#include <stdio.h>

int main() {

    int numero;
    int lado1, lado2, lado3;

    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%i", &numero);

    if(lado1 == lado2 && lado2 == lado3){
        printf("Triangulo Equilatero\n");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("Triangulo Isosceles\n");
    }
    else{
        printf("Triangulo Escaleno\n");
    }

    return 0;
}