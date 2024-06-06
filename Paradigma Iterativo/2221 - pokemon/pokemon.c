#include <stdio.h>
#include <stdlib.h>

int main(){

    int instancias, bonus, ataque, defesa, level;
    int valorGolpeDabriel, valorGolpeGuarte;

    scanf("%d\n", &instancias);

    int i = 0;
    while(i < instancias){
        scanf("%d\n", &bonus);

        // Dabriel
        scanf("%d %d %d\n", &ataque, &defesa, &level);
        valorGolpeDabriel = (ataque + defesa)/2;

        // decidir bônus
        if(level%2 == 0){
            valorGolpeDabriel += bonus;
        }

        // Guarte
        scanf("%d %d %d\n", &ataque, &defesa, &level);
        valorGolpeGuarte = (ataque + defesa)/2;

        // decidir bônus
        if(level%2 == 0){
            valorGolpeGuarte += bonus;
        }

        // decidir vencedor
        if(valorGolpeDabriel > valorGolpeGuarte){
            printf("Dabriel\n");
        } else if(valorGolpeGuarte > valorGolpeDabriel){
            printf("Guarte\n");
        } else{
            printf("Empate\n");
        }
        i++;
    }

    return 0;
}