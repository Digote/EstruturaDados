#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 123:   Faça um programa para calcular a transposta de uma matriz 5 x 4.
                        Imprima as duas matrizes na tela.
tela.
*/

int main(){

    int matrizA[5][4] = {0}, matrizB[4][5] = {0}, l, c, aux = 1;

    for(l = 0; l < 5; l++){
        for(c = 0; c < 4; c++){
            matrizA[l][c] += aux;
            aux++;
        }
    }

        printf("\n\n Matriz normal\n");

        for(l = 0; l < 5; l++){
            for(c = 0; c < 4; c++){
                printf("%2d ", matrizA[l][c]);
        }
                printf("\n");
    }
    return 0;
}