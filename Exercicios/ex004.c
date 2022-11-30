#include <stdio.h>
#include <stdlib.h>

/* Aula 114: Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos 
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas 
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade 
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que 
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois, 
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados 
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos 
empatados).

*/

int main() {

    float valorItem[2], valorTotal[2] = {0,0}, comissao = 0, salario = 1100;

    int qtdVendida[2], i, totalVendas = 0;



    for(i = 0; i < 2; i++){
        printf("\nDigite o valor item e depois a quantidade vendida: ");
        scanf("%f%d", &valorItem[i], &qtdVendida[i]);
    }

    for(i = 0; i < 2; i++){
        printf("\nA quantidade vendida do produto %d foi de %d e o valor do item e %2.f\n", i, qtdVendida[i], valorItem[i]);
        valorTotal[i] += (qtdVendida[i] * valorItem[i]);
        totalVendas += qtdVendida[i];
        comissao = qtdVendida[i] * valorItem[i];
    }

        comissao = comissao * 0.5;

    for(i = 0; i < 2; i++){
        printf("\nO valor total vendido do item %d e de %2.f\n", i, valorTotal[i]);
    }

        printf("\n O total de vendas foi de %d itens\n", totalVendas);
        printf("\n A comissao que sera paga ficou em %2.f", comissao);
        
    return 0;
}