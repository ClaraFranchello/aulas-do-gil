#include <stdio.h>

int main() {

    int dia, mes;

    printf("Digite o dia e o mes: ");
    scanf("%i %i", &dia, &mes);

    if(mes < 1 || mes > 12 ){
        printf("Mes invalido");
    }
    return 0;
}