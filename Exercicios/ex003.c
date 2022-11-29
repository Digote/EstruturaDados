#include <stdio.h>
#include <stdlib.h>

/* Aula 113: Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário. 
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/

int main() {

    int a, fim = 19, copia, vetor[20];

    for(a = 0; a < 20; a++){
        printf("Digite a posicao %d do vetor ", a);
        scanf("\n%d", &vetor[a]);
    }

    printf("\nVetor original: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    for(a = 0; a < 10; a++){ 
        copia = vetor[a];
        vetor[a] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

        printf("\nVetor Modificado: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }
    return 0;
}