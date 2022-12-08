#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 121:   Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/


int main(){

    int matriz[5][5] = {0}, l, c, aux = 0;

    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            matriz[l][c] = aux;
            aux++;
        }
    }

    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            if( l == c)
                printf("%d ", matriz[l][c]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}