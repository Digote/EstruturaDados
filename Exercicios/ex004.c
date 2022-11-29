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

    float valorObjeto[2], valorTotal[2], salarioComissao, totalVendaProduto[2], totalVenda;
    float salario = 1100;
    int quantidadeVendida[2], i, maior, menor;

    for(i = 0; i < 2; i++){
        printf("\nQual o valor do objeto %d e qual foi a quantidade vendida: %d ", i, i);
        scanf("%2f %d", &valorObjeto[i], &quantidadeVendida[i]); 
    }

    for(i = 0; i < 2; i++){
        printf("\n A quantidade vendida do produto %d e = %d", i, quantidadeVendida[i]);
        printf("\nO valor unitario do produto %d e = %2.f\n", i, valorObjeto[i]);
        totalVendaProduto[i] = quantidadeVendida[i] * valorObjeto[i];
        printf("O valor total vendido do objeto  %d = %2.f\n", i, totalVendaProduto[i]);
        totalVenda = totalVendaProduto[i] + totalVenda;
        salario = (totalVenda * 0.5) + salario;
    }

        printf("\nVoce teve um total de vendas de: \n%2.f", totalVenda);
        printf("\nO seu salario vai ser de: \n%2.f", salario);

        for(i = 0; i < 2; i++){
            if(i == 0){
            menor = quantidadeVendida[i];
            maior = quantidadeVendida[i];
            if(quantidadeVendida[i] > maior){
                maior = quantidadeVendida[i];
            }
            else{
                if(quantidadeVendida[i] < menor) {
                    menor = quantidadeVendida[i];
                }
            }
            }
        }

        printf("\nO maior valor foi: %d", maior);

    return 0;
}