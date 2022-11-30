#include <stdio.h>
#include <stdlib.h>

/*
    Aula 115:   Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um 
                vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
                mês por extenso: janeiro, fevereiro …). Desconsidere empates.
*/

int main(){

    int tempMedia [12], i, maior = 0, menor = 0, indiceMaior = 0, indiceMenor = 0;
    char mesMenor[60], mesMaior[60];

    for(i = 0; i < 12 ; i++){
        printf("\nDigite a temperatura do mes %d ", i);
        scanf("%d", &tempMedia[i]);
    }

    for(i = 0; i < 12; i++){
        if(tempMedia[i] > maior){
            maior = tempMedia[i];
            indiceMaior = i;
        }if(tempMedia[i] < menor){
            menor = tempMedia[i];
            indiceMenor = i;
        }
    }

    printf("\nA menor temperatura foi %d\n no mes de %d - ", menor, indiceMenor);
    switch (indiceMenor){
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;    
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }

    printf("\nA maior temperatura foi %d\n no mes de %d - ", maior, indiceMaior);
    switch (indiceMaior){
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;    
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }
    
    return 0;
}