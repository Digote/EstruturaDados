#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            Aula 137:   Copiando uma String com a função strcpy()
*/


int main(){

    char palavras1[50] = {"bola"};
    char palavras2[50] = {"abacate"};

    printf("\nAntes de copiar palavras1: %s\nAntes de copiar palavras2: %s\n", palavras1, palavras2);

    strcpy(palavras2, palavras1);

    printf("\nDepois de copiar palavras1: %s\nDepois de copiar palavras2: %s\n", palavras1, palavras2);

    return 0;
}