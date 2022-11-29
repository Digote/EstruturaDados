#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet1[2] = {1,2}, vet2[2] = {80,90};
    int i,j,c;

    /* for(i = 0; i < 2; i++){
        printf("Digite o valor da P %d do vetor1: ", i);
        scanf("%d", &vet1[i]);
    }
    
        for(j = 0; j < 2; j++){
        printf("Digite o valor da P %d do vetor2: ", j);
        scanf("%d", &vet2[j]);
    }
    */

    printf("\n");

    for(c = 0; c < 2; c++){
        printf("Pocisao %d vetor1= %d ", c,vet1[c]);
        printf("\n\n");
        printf("Pocisao %d vetor2= %d ", c, vet2[c]);
        printf("\n");
    }
    
    for(i = 2; i > 2; i--){
        for(j = 0; j < 2; j++)
        vet1[i] = vet2[j];
    }
    
    printf("----------------------------------------------------");
    printf("\n");
    
    for(c = 0; c < 2; c++){
        printf("Pocisao %d vetor1= %d ", c,vet1[c]);
        printf("\n\n");
        printf("Pocisao %d vetor2= %d ", c, vet2[c]);
        printf("\n");
    }
}