#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 125:  Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.
*/


int main() {

    int matriz[4][4] = {0}, l, c, diagonalP = 0, diagonalS = 0, linhas[4] = {0}, colunas[4] = {0}, aux = 1;

    srand(time(NULL));

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            matriz[l][c] = rand() % 100;
        }
    }

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            printf("%2d ", matriz[l][c]);
        }
        printf("\n");
    }

    for(l = 0; l <4; l++){
        for(c = 0; c <4; c++){
            if(l == c)
                diagonalP += matriz[l][c];
        }
    }

    l = 0;
    for(c = 3; c >= 0; c--){
        diagonalS += matriz[l][c];
        l++;
    }

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            linhas[l] += matriz[l][c];
        }
    }

    for(c = 0; c < 4; c++){
        for(l = 0; l < 4; l++){
            colunas[c] += matriz[l][c];
        }
    }

    printf("\n\nSoma da Diagonal principal %2d ", diagonalP);
    printf("\n\nSoma da Diagonal secundaria %2d \n", diagonalS);

    for(l = 0; l < 4; l++)
        printf("\nSoma das linhas %d %2d ", l, linhas[l]);

        printf("\n\n");

            for(c = 0; c < 4; c++)
        printf("\nSoma das colunas %d %2d ", c, colunas[c]);

        if(diagonalP == diagonalS && linhas[0] == colunas[0] && linhas[1] == colunas[1] && linhas[2] == colunas[2] && linhas[3] == colunas[3]){
                printf("\n\nE um cubo Magico");
            }else{
                printf("\n\nNao e um cubo Magico");
        }
        
    return 0;
}