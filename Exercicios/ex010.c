#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 120:   Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
                        em uma matriz C. Imprima as três matrizes.
*/


int main(){

    int matA[3][3] = {0}, matB[3][3] = {0}, matC[3][3] = {0}, linha, coluna, soma = 0, aux = 1;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            matA[linha][coluna] += aux;
            matB[linha][coluna] += aux;
            aux++;
            printf("\n%d ", matA[linha][coluna]);
            printf("%d ", matB[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            matC[linha][coluna] = matA[linha][coluna] + matB[linha][coluna];
        }
    }
    
    printf("\n\n");

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("\n%d + %d = %d ", matA[linha][coluna], matB[linha][coluna],matC[linha][coluna]);
        }
    }
    return 0;
}
