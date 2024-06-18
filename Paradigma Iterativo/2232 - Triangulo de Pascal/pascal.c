#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int casos, linhas, S;
    scanf("%d\n", &casos);

    int i = 1;
    while(i <= casos){
        linhas;
        scanf("%d\n", &linhas);

        S = pow(2, linhas) - 1;
        printf("%d\n", S);
        
        i++;
    }

    return 0;
}