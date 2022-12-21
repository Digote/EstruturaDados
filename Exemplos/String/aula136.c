#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            Aula 136:   Como comparar duas Strings com a função strcmp()
            0 ->  as strings são iguais.
            -1 -> a str1 for menor que a str2
            1 -> a str1 for maior que a str2
*/


int main(){

    char palavras1[50] = {"Oi"};
    char palavras2[50] = {"Oi"};

    printf("\n\nResultado: %d\n\n", strcmp(palavras1, palavras2));

    return 0;
}