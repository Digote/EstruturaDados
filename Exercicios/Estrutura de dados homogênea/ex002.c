#include <stdio.h>
#include <stdlib.h>

/*   Aula 112: Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado em um terceiro vetor. Imprima os três vetores na tela.
*/

int main() {

    int i, vet1[25], vet2[25], vet3[25];

    for(i = 0; i < 25; i++){
        vet1[i] = i;
        vet2[i] = i;
        vet3[i] = vet1[i] + vet2[i];
        printf(" %d + %d = %d", vet1[i], vet2[i], vet3[i]);
        printf("\n\n");
    }
    return 0;
}