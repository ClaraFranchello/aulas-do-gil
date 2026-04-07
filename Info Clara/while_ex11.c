#include <stdio.h>

int main() {

    int a, b, c, d, e, f, g, i = 0, aux = 1;
    printf("Digite sete valores: ");
    scanf("%i %i %i %i %i %i %i", &a, &b, &c, &d, &e, &f, &g);
    printf("Ordem decrescente: ");
    while(i <= 1000){
        if(i == a || i == b || i == c || i == d || i == e || i == f || i == g ){
            printf("%i ",i);
        }

        
        i++;
    }
   
    return 0;
}