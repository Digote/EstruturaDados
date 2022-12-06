#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
            Aula 117:   Faça um programa para ordenar um vetor com 100 números inteiros.
                        Imprima o vetor antes e após a ordenação.
*/

int main(){

    int vetor[100], i, aux = 0, j;

    srand(time(NULL));

    for(i = 0; i < 100; i++)
        vetor[i] = 1 + rand() % 1000;

    printf("Forma nao ordenada\n\n");

    for(i = 0; i < 100; i++)
        printf("%d ", vetor[i]);

    printf("\n\nForma ordenada crescente\n\n");

    for(i = 0; i < 100; i++)
    {
        for(j = 0;  j < 100; j++ )
        {

            if(vetor[i] < vetor[j])
            {
                aux =  vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}