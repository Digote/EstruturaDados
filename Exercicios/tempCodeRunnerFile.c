#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet1[2], vet2[2], i;

    for(i = 0; i < 2; i++){
        printf("Digite o valor da P %d do vetor: ", i);
        scanf("%d", &vet1[i]);
    }

    for(i = 0; i < 2; i++){
    printf("%d", vet1[i]);
    }

    for(i = 0; i < 2; i++){
        for(i = 2; i > 2; i--)
        vet1[i] =  vet2[i];
        printf("%d %d ", vet1[i], vet2[i]);
    }
}