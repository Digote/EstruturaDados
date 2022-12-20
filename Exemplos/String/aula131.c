#include <stdio.h>
#include <stdlib.h>

/*
            Aula 131:   Lendo uma String com a função fgets()
*/


int main(){

    char palavras[30];

    printf("Digite seu nome: ");
    //scanf("%30[^\n]", palavras);
    // gets(palavras);

    fgets(palavras, 30, stdin); /*variavel, tamanho, d onde está lendo*/

    printf("%s\n\n", palavras);

    return 0;
}