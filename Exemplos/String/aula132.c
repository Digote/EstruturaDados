#include <stdio.h>
#include <stdlib.h>

/*
            Aula 132:   Como identificar o fim de uma String?
*/


int main(){

    int c;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    //printf("Digite seu nome: ");
    //scanf("%30[^\n]", palavras);
    // gets(palavras);
    fgets(palavras, 15, stdin); 

    c = 0;

    while(palavras[c] != '\0'){
        printf("%d = %d\n", c ,palavras[c]);
        c++;
    }
    printf("\n");

    return 0;
}