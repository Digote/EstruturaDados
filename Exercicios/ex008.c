#include <stdio.h>
#include <stdlib.h>

/*
            Aula 118:   Faça um programa que calcule e imprima a soma de todos
                        os elementos de uma matriz 5 x 7.

*/

int main() {

    int i, j, aux = 1, aux2 = 0, matriz[5][7] ={0};
    int linha[5];

    printf("\nAntes da Soma\n\n");
    
    for( i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            matriz[i][j] += aux;
            aux++;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    for( i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            aux2 += matriz[i][j];
        }
    }

    printf("\n\nSomando todos elementos fica: %d\n", aux2);

    return 0;
}