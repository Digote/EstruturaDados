#include <stdio.h>
#include <stdlib.h>

/*
            Aula 133:   Como descobrir o tamanho de uma String?
*/


int main(){

    int c, tam = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    //scanf("%30[^\n]", palavras);
    // gets(palavras);
    fgets(palavras, 15, stdin); //file
    
    c= 0;
    while(palavras[c] != '\0'){
        if(palavras[c] == '\n')
            palavras[c] = '\0';
        c++;    
    }

    c = 0;
    while(palavras[c] != '\0'){
        //printf("%d = %d\n", c ,palavras[c]);
        tam++;
        c++;
    }
    printf("Tamanho: %d\n", tam);

    return 0;
}