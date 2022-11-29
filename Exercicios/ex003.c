#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet1[2] = {1,2}, vet2[2] = {80,90};
    int i,j,c;

    printf("\n");

    for(c = 0; c < 2; c++){
        printf("Pocisao %d vet1 = %d ", c,vet1[c]);
        printf("\n");
        printf("Pocisao %d vet2 = %d ", c, vet2[c]);
        printf("\n");
    }

    c = 0;
    
    for(i = 2; i >= 2; i--){
        for(j = 0; j < 2; j++)
        vet1[i] =+ vet2[j];
    }
    
    printf("----------------------------------------------------");
    printf("\n");
    
    for(c = 0; c < 2; c++){
        printf("Pocisao %d vet1 = %d ", c,vet1[c]);
        printf("\n");
        printf("Pocisao %d vet2 = %d ", c, vet2[c]);
        printf("\n");
    }
}