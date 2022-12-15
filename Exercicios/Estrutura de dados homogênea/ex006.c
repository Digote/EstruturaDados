#include <stdio.h>
#include <stdlib.h>


/*
            Aula 116:   Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um 
                        código inteiro e faça uma das ações abaixo:
                        0 – finaliza o programa;
                        1 – imprime o vetor na ordem do início ao fim;
                        2 – imprime o vetor na ordem inversa (do fim para o início).
                        O programa deve funcionar até que o usuário digite 0 para finalizar
*/

int main(){

    float vetor[10];
    int i, comando;

    for(i = 0; i < 10; i++){
        printf("Digite 10 valores: ");
        scanf("%f", &vetor[i]);
    }

    do {
        printf("\n0 - Finalizar\n1 - imprimir vetor\n2 - imprimir vetor invertido\n\n");
        scanf("%d", &comando);
        
        switch(comando) {
        case 0:
            printf("\nfinalizando...\n");
            break;
            
        case 1:
            printf("\n");
            for(i = 0; i < 10; i++)
            printf("%2.f ", vetor[i]);
            printf("\n\n");
            break;
            
        case 2:
            printf("\n");
            for( i = 9; i >= 0; i--)
            printf("%2.f", vetor[i]);
            printf("\n\n");
            break;

        default:
            printf("\nComando invalido!\n\n");
        }
        
    }while(comando != 0);

    return 0;
}