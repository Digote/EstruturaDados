#include <stdio.h>
#include <stdlib.h>

/*
            Aula 130:   Lendo uma String com a função gets()
*/


int main(){

    char palavras[30];

    printf("Digite seu nome: ");
    //scanf("%30[^\n]", palavras);

    gets(palavras);

    printf("%s\n\n", palavras);

    return 0;
}