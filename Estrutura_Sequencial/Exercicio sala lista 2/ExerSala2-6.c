/*6) Faça um programa que leia o preço de uma mercadoria com diferença de um mês (ler
o valor da mercadoria no mês passado e no mês atual) e calcule a taxa de inflação mensal
dessa mercadoria. A inflação é o percentual da diferença de preços (atual menos o anterior)
sobre o preço anterior.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float merPass, merAtual, inflacao;

    printf("Informe o valor da mercadoria no mes passado: ");
    scanf("%f",&merPass);
    printf("Informe o valor da mercadoria no mes atual: ");
    scanf("%f",&merAtual);

    inflacao = ((merAtual - merPass) *100) / merPass;

    printf("A inflacao mensal do preco e: %f\n",inflacao);

    system("pause");
    return(0);
}
