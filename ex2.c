#include <stdio.h>

    int main(){
        char atividadef, alimentacao;
        printf("voce pratica atividades fisicas? [s] ou [n]: ");
        scanf("%c", &atividadef);
        printf("voce possui uma alimentação saudavel? [s] ou [n]: ");
        scanf(" %c", &alimentacao);

        if(atividadef == 's' && alimentacao == 's'){
            printf("Vida saudavel!");
        }
        else if(atividadef == 's' && alimentacao == 'n'|| atividadef == 'n' && alimentacao == 's'){
            printf("Pode melhorar!!");
        }
        else{
            printf("Hora de melhorar!!");
        }

        
    }