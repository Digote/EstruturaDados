#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 124:  Faça um programa que imprima na tela apenas os valores abaixo
                        da diagonal principal de uma matriz 4 x 4.
*/

int main (){

    int matrizA[4][4] = {0}, l, c, aux = 1;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            matrizA[l][c] += aux;
            aux++;
        }
    }


    printf("\n Matriz Gerada: \n\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            printf("%2d ", matrizA[l][c]);
        }
        printf("\n");
    }


    printf("\n Matriz com valores abaixo da diagonal principal. \n\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            if(l > c)
                printf("%2d ", matrizA[l][c]);
            else
                printf("   ");
        }
        printf("\n");
    }




    return 0; 
}