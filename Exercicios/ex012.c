#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 122:  Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main(){

    int matriz[7][7] = {0}, l, c, aux = 1;

    for(l = 0; l < 7; l++){
        for(c = 0; c < 7; c++){
            matriz[l][c] = aux;
            aux++;
        }
    }

    printf("Imprimindo a Matriz 7 x 7\n\n");

    for(l = 0; l < 7; l++){
        for(c = 0; c < 7; c++){
            printf("%2d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\n\nForma 1 - Digote\n");
    l = 0;
    for(c = 6; c >= 0; c--){
        printf("%2d ", matriz[l][c]);
        l++;
    }
    
    printf("\n\nForma 2 - Professor\n");
    c = 7;
    for(l = 0; l < 7; l++)
        printf("%2d ", matriz[l][c - 1 - l]);
    return 0;
}