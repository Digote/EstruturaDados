#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            Aula 135:   Concatenando duas Strings com a função strcat()
*/


int main(){

    char palavras1[50] = {"Oi."};
    char palavras2[50] = {"Bom dia."};

    strcat(palavras1, palavras2);

    printf("\n\t%s\n", palavras1);

    return 0;
}