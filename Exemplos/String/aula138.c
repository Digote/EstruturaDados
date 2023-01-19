#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            Aula 138:   Procurando caracteres em uma String coma as funções Strchr e strrchr
            strchr -> retorna a primeira ocorrência
            strrchr -> retorna a última ocorrência
*/

int main() {

    char palavra [50] = {"abacate"};
    char *letra;

    letra = strchr(palavra, 'a');

    printf("\n%c\n", *letra);
    printf("\n%c\n", *(letra + 1));
    printf("\n%c\n", *(letra + 2));
    printf("\n%c\n", *(letra + 3));
    printf("\n%c\n", *(letra + 4));
    printf("\n%c\n", *(letra + 5));
    printf("\n%c\n", *(letra + 6));
    printf("\n%c\n", *(letra + 7));

    letra = strrchr(palavra, 'a');

    printf("\n%c\n", *letra);
    printf("\n%c\n", *(letra + 1));
    printf("\n%c\n", *(letra + 2));

    return 0;

}