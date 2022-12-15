#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 119:   9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
                        a) some cada uma das linhas armazenando o resultado em um vetor;
                        b) some cada uma das colunas armazenando o resultado em um vetor;
                        c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas
*/

int main() {

    int matriz[5][10] = {0}, l, c, aux = 0, vetorA[5] = {0}, soma = 0, vetorB[10] = {0};

    for(l = 0; l < 5; l++){
        for(c = 0; c < 10; c++){
            matriz[l][c] += aux;
            aux++;
            printf("%2d ", matriz[l][c]);
            }
        printf("\n");
    }
    aux = 0;
    
    printf("\n\n");
    
    for(l = 0; l < 5; l++){
        soma = 0;
            for(c = 0; c < 10; c++){
                soma += matriz[l][c];
        }
                vetorA[l] = soma;
    }
    
    printf("\n");
    
    for(l = 0; l < 5; l++){
        printf("\nsoma vetorA de lugar %d = %d ", l,vetorA[l]);
    }

        for(c = 0; c < 10; c++){
            soma = 0;
                for(l = 0; l < 5; l++){
                    soma += matriz[l][c];
                    
        }
                    vetorB[c] = soma;
    }

    printf("\n");

    for(l = 0; l < 10; l++){
        printf("\nsoma vetorB de lugar %d = %d ", l,vetorB[l]);
    }

    return 0;
}