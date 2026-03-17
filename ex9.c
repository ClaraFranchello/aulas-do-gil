#include <stdio.h>
#include <stdio_ext.h>

    int main() {

    char pelcurta, pelmedia,pellonga, altura, peso, expdevida;

        printf("Possui peso maior ou igual a 30kg? [s] ou [n] ");
        __fpurge(stdin);
        scanf("%c", &peso);

        printf("Possui altura maior igual a 80cm? [s] ou [n] ");
        __fpurge(stdin);
        scanf("%c", &altura);

        printf("Possui expectativa de vida maior ou igual a 14 anos? [s] ou [n] ");
        __fpurge(stdin);
        scanf("%c", &expdevida);

        printf("Possui pelagem curta? [s] ou [n] ");
        __fpurge(stdin);
        scanf("%c", &pelcurta);

            if(pelcurta == 'n'){
                printf("Possui pelagem media? [s] ou [n] ");
                scanf("%i", &pelmedia);
                    if(peso == 's' && altura == 's' && expdevida == 's' && pelmedia == 's'){
                        printf(" -  Pastor Alemão");
                    }
                    else if (peso == 's' && altura == 'n' && expdevida == 's' && pelmedia == 's'){
                        printf(" -  Labrador");
                    }
                    else if(peso == 'n' && altura == 'n' && expdevida == 's' && pelmedia == 's'){
                        printf(" -  Cocker Ingles");
                    }
            if(pelmedia == 'n'){
                 if(peso == 'n' && altura == 's' && expdevida == 'n' && pellonga == 's' ){
                    printf("- São Bernardo");
                }
                else if(peso == 's' && altura == 'n' && expdevida == 'n' && pellonga == 's' ){
                    printf("- Chow Chow");
                }
                else if(peso == 'n' && altura == 'n' && expdevida == 'n' && pellonga == 's' ){
                    printf(" Pequinês");
                }
            }
        }
        if(peso == 'n' && altura == 's' && expdevida == 's' && pelcurta == 's'){
            printf(" -  Dalmata");
        }
        else if(peso == 's' && altura == 's' && expdevida == 's' && pelcurta == 'n'){
            printf(" -  Bulldog Inglês");
        }
        else if(peso == 'n' && altura == 'n' && expdevida == 'n' && pelcurta == 's'){
            printf(" -  Bull Terrier");
        }

    return 0;
}