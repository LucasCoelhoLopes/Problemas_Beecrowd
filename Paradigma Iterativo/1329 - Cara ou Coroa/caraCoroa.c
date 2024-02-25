#include <stdio.h>
#include <stdlib.h>

int main(){

    int vezesMariaVenceu = 0;
    int vezesJoaoVenceu = 0;
    int vezesJogadas = -99;

    char jogadaAtual;

    while(1){

        scanf("%d\n", &vezesJogadas);

        if(vezesJogadas == 0){
            break;
        }

        for(int i = 0; i < vezesJogadas; i++){
            scanf("%c ", &jogadaAtual);
            if(jogadaAtual == '0'){
                vezesMariaVenceu++;
            } else{
                vezesJoaoVenceu++;
            }
        }

        printf("Mary won %d times and John won %d times\n", vezesMariaVenceu, vezesJoaoVenceu);
        vezesMariaVenceu = 0;
        vezesJoaoVenceu = 0;
        
    }

    return 0;
}



