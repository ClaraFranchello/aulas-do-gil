#include <stdio.h>

    int main(){
        int dia1, dia2;
        printf("Digite os dias: ");
        scanf("%i %i", &dia1, &dia2);

        printf("[");
            if(dia1 == 1){
                printf("Domingo");
            }
            else if(dia1 == 2){
                printf("segunda");
            }
            else if(dia1 == 3){
                printf("terça");
            }
            else if(dia1 == 4){
                printf("quarta");
            }
            else if(dia1 == 5){
                printf("quinta");
            }
            else if(dia1 == 6){
                printf("sexta");
            }
            else if(dia1 == 7){
                printf("sabado");
            }
            
            if(dia1 >= 1 && dia1 <=7 && dia2 >= 1 && dia2 <=7){
                printf(", ");
            }

              if(dia2 == 1){
                printf("Domingo");
            }
            else if(dia2 == 2){
                printf("segunda");
            }
            else if(dia2 == 3){
                printf("terça");
            }
            else if(dia2 == 4){
                printf("quarta");
            }
            else if(dia2 == 5){
                printf("quinta");
            }
            else if(dia2 == 6){
                printf("sexta");
            }
            else if(dia2 == 7){
                printf("sabado");
            }
            
           printf("]");
    return 0;

        
    }