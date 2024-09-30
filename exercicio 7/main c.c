#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computador(){
    int n;

    n = rand();
    n = n%3+1;

    return n;

}

int main(){
    int n;
    int c;
    int E;


    printf("1-tesoura\n2-papel\n3-pedra\nEscolha o seu:");
    scanf("%d",&E);

    srand(time(NULL));


    n = computador();
    printf("%d\n",n);

    if(E==1){
        if(n==1){
            printf("empate.\n");
        }
        else if(n==2){
                printf("Voce ganhou.\n");
            }

        else if(n==3){
            printf("voce perdeu.\n");
        }

    }
    if(E==2){
        if(n==1){
            printf("voce perdeu.\n");
        }
        else if(n==2){
                printf("empate.\n");
            }

        else if(n==3){
            printf("voce ganhou.\n");
        }

    }

    if(E==3){
        if(n==1){
            printf("voce perdeu.\n");
        }
        else if(n==2){
                printf("Voce ganhou.\n");
            }

        else if(n==3){
            printf("empate.\n");
        }

    }

    return 0;
}
