/*6) Fa�a um programa que leia o pre�o de uma mercadoria com diferen�a de um m�s (ler
o valor da mercadoria no m�s passado e no m�s atual) e calcule a taxa de infla��o mensal
dessa mercadoria. A infla��o � o percentual da diferen�a de pre�os (atual menos o anterior)
sobre o pre�o anterior.*/

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
