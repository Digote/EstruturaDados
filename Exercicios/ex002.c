#include <stdio.h>
#include <stdlib.h>

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