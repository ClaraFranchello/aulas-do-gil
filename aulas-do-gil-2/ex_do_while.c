#include <stdio.h>
#include <stdlib.h>

int main() {

    int fim, jogador, qj, qja;
    char a, b, c, d, e, f, g, h, i, jogada, resp;
    
    do{
        a = b = c = d = e = f = g = h = i = ' ';
        fim = 0;
        jogador = 1;
        qj = 0;
        qja = 0;
        do{
            printf("======================== ");//cls
            printf("\n===== JOGO DA VELHA =====");
            printf("========================" );
            printf("\n\n\n            a | b | c");
            printf("\n            ---------");
            printf("\n            d | e | f");
            printf("\n            ---------");
            printf("\n            g | h | i");
            printf("\n");
            printf("\n             %c | %c  | %c ", a, b, c);
            printf("\n           -------------");
            printf("\n             %c | %c  | %c ", d, e, f);
            printf("\n           -------------");
            printf("\n             %c | %c  | %c  ", g, h, i);
            printf("\n======================");
            if(jogador == 1){
                printf("\n Jogador 0%i [X]", jogador);
            }
            else{
                printf("\n Jogador 0%i [O]", jogador);
            }
            scanf(" %c", &jogada);

            switch(jogada){
                case 'a':
                    if(a == ' '){
                        if(jogador == 1){
                            a = 'X';
                        }
                        else{
                            a = 'O';
                        }
                        qj ++;
                    }
                    break;


                case 'b':
                    if(b == ' '){
                        if(jogador == 1){
                            b = 'X';
                        }
                        else{
                            b = 'O';
                        }
                        qj++;
                    }
                    break ;

                case 'c':
                    if(c == ' '){
                        if(jogador == 1){
                            c = 'X';
                        }
                        else{
                            c = 'O';
                        }
                        qj++;
                    }  
                    break;

                case 'd':
                    if(d == ' '){  
                        if(jogador == 1){
                            d = 'X';
                        }
                        else{
                            d = 'O';
                        }
                        qj++;
                    }
                    break;

                case 'e':
                    if(e == ' '){
                        if(jogador == 1){
                            e = 'X';
                        }
                        else{
                            e = 'O';
                        }
                        qj++;
                    }   
                    break;

                case 'f':
                    if(f == ' '){
                        if(jogador == 1){
                            f = 'X';
                        }
                        else{
                            f = 'O';
                        }
                        qj++;   
                    }
                    break;

                case 'g':
                    if(g == ' '){
                        if(jogador == 1){
                            g = 'X';
                        }
                        else{
                            g = 'O';
                        }
                        qj++;
                    }   
                    break;

                case 'h':
                    if(h == ' '){
                        if(jogador == 1){
                            h = 'X';
                        }
                        else{
                            h = 'O';
                        }  
                        qj++;
                    } 
                    break;

                case 'i':
                    if(i == ' '){
                        if(jogador == 1){
                            i = 'X';
                        }
                        else{
                            i = 'O';
                        }
                        qj++;
                    }   
                    break;   
                    }

            if(qj > qja){        
                if(jogador == 1){
                    jogador = 2;
                }
                else{
                    jogador = 1;
                }
                qja = qj;
            }
            if(jogador == 1){
                if( a == 'X' && b == 'X' && c == 'X')printf("Jogador 1 ganhou!");
                else if( d == 'X' && e == 'X' && f == 'X')printf("Jogador 1 ganhou!");
                else if(g == 'X' && h == 'X' && i == 'X')printf("Jogador 1 ganhou!");
                else if(a == 'X' && d == 'X' && g == 'X')printf("Jogador 1 ganhou!");
                else if(b == 'X' && e == 'X' && h == 'X')printf("Jogador 1 ganhou!");
                else if(c == 'X' && f == 'X' && i == 'X')printf("Jogador 1 ganhou!");
                else if(a == 'X' && e == 'X' && i == 'X')printf("Jogador 1 ganhou!");
                else if(c == 'X' && e == 'X' && g == 'X')printf("Jogador 1 ganhou!");
            }
            else if(jogador == 2){
                if( a == 'O' && b == 'O' && c == 'O')printf("Jogador 2 ganhou!");
                else if( d == 'O' && e == 'O' && f == 'O')printf("Jogador 2 ganhou!");
                else if(g == 'O' && h == 'O' && i == 'O')printf("Jogador 2 ganhou!");
                else if(b == 'O' && e == 'O' && h == 'O')printf("Jogador 2 ganhou!");
                else if(c == 'O' && f == 'O' && i == 'O')printf("Jogador 2 ganhou!");
                else if(a == 'O' && e == 'O' && i == 'O')printf("Jogador 2 ganhou!");
                else if(c == 'O' && e == 'O' && g == 'O')printf("Jogador 2 ganhou!");
            }
            if (qj == 9){
                printf("deu velha!");
                fim = 1;
            }
            
        }while(fim == 0);
        printf("Deseja continuar? ");
        scanf(" %c", &resp);
    }while(resp == 's' || resp =='S');
    

	return 0;
    }