#include <stdio.h>
#include <stdio_ext.h>

    int main(){
        char pai;
        char mae;

        printf("Pai, posso sair [s] ou [n]?");
        __fpurge(stdin);
        scanf("%c", &pai);
        printf("Mae, posso sair [s] ou [n]?");
        __fpurge(stdin);
        scanf("%c", &mae);

        if(pai == 's' || mae == 's'){
            printf("Vai Sair!!");
        }


    return 0;

        
    }