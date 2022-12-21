#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            Aula 134:   Descobrindo o tamanho de uma String com a função strlen()
*/


int main(){

    int tam;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    //scanf("%30[^\n]", palavras);
    // gets(palavras);
    fgets(palavras, 15, stdin); //file
    
    printf("Tamanho: %d\n", strlen(palavras));

    return 0;
}