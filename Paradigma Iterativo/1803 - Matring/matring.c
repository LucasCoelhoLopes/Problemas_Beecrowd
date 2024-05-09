#include <stdio.h>
#include <stdlib.h>

int main(){

    char caracter;
    int matriz[4][100]; 
    int colunas = -99; // para não cair no if quando a quantidade de colunas ainda não for encontrada

    int linha = 0;
    int coluna = 0; 
    while (linha < 4){
        scanf("%c", &caracter);

        if(caracter == '\n' || coluna == colunas + 1){ // depois do || é para ler a última linha 
            colunas = coluna - 1; // preciso saber das colunas pra printar
            linha++;
            coluna = 0;
            
        } else{
            matriz[linha][coluna] = atoi(&caracter);
            coluna++;
        }
    }

    // concatenar e converter para int (F)
    char Fchar[5];
    int Fint;
    sprintf(Fchar, "%d%d%d%d", matriz[0][0], matriz[1][0], matriz[2][0], matriz[3][0]);
    Fint = atoi(Fchar);

    // concatenar e converter para int (L)
    char Lchar[5];
    int Lint;
    sprintf(Lchar, "%d%d%d%d", matriz[0][colunas], matriz[1][colunas], matriz[2][colunas], matriz[3][colunas]);
    Lint = atoi(Lchar);

    // decodificar
    for(int coluna2 = 1; coluna2 < colunas; coluna2++){
        // concatenar e converter para int (Mi)
        char Mchar[5];
        int Mint;
        sprintf(Mchar, "%d%d%d%d", matriz[0][coluna2], matriz[1][coluna2], matriz[2][coluna2], matriz[3][coluna2]);
        Mint = atoi(Mchar);
        char C = (char)((Fint * Mint + Lint)%257);
        printf("%c", C);
    }
    printf("\n");

    return 0;
}



