#include <stdio.h>
#include <stdlib.h>


/*   Aula 111: Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário. Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor.Por fim, imprima os dois vetores..
*/

int main () {
    
    int vetor[10], vetor2[10], contador;

    for(contador = 0; contador < 10; contador++){
        printf("Digite o valor da posicao %d do vetor ", contador);
        scanf("%d", &vetor[contador]);
        vetor2[contador] = vetor[contador] * vetor[contador];
    }

    printf("\n");

    for(contador = 0; contador < 10; contador++){
        printf("O valor da pocisao %d do vetor2 e igual a %d\n ", contador, vetor2[contador]);
    }

    return 0;
}