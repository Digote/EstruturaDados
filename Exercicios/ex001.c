#include <stdio.h>
#include <stdlib.h>

int main () {

    int i;
    int vet1[10], vet2[10];

    for(i = 0; i < 10; i++){
        printf("Digite o elemento da posicao %d: ", i);
        scanf("%d", &vet1[i]);
        vet2[i] = vet1[i] * 2;
    }

    printf("\n\n");

    for(i = 0; i < 10; i++)
        printf("%d ", vet2[i]);
        printf("\n\n");
    return 0;
}