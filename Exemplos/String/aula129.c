#include <stdio.h>
#include <stdlib.h>

/*
            Aula 129:   Lendo uma String com a função scanf()
                        Scanf("%80[^\n]", str);
*/


int main(){

    char palavras[30] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    scanf("%30[^\n]", palavras);

    printf("%s\n\n", palavras);

    return 0;
}