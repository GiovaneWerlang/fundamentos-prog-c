#include <stdio.h>

int main(void)
{
    //variaveis
    float precoAtual, precoDesconto;

    //entrada
    printf("Insira o preco atual: ");
    scanf("%f",&precoAtual);

    //processamento
    precoDesconto = precoAtual -((float)precoAtual * 10/100);

    //saida
    printf("O preco com desconto e de: %f",precoDesconto);
}
