#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 120:   Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
                        em uma matriz C. Imprima as três matrizes.
*/


int main(){

    int matA[3][3], matB[3][3] = {0}, matC[3][3] = {0}, linha, coluna, soma, aux = 1;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            matA[linha][coluna] += aux;
            matB[linha][coluna] += aux;
            aux++;
            printf("\n%d ", matA[linha][coluna]);
            printf("%d ", matB[linha][coluna]);
        }
    }

    return 0;
}