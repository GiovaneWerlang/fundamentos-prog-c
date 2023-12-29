/*2) Ler um valor que representa o preço de um produto e ler o percentual do reajuste. O
valor informado é em percentual, por exemplo, se informado 5 representa 5%. Calcular o
valor do reajuste e o valor reajustado, mostrar ambos.*/

#include <stdio.h>

int main(void)
{
    //variaveis
    float precoProduto, valorReajuste, valorReajustado, percentual;

    //entrada
    printf("Informe o preco do produto: ");
    scanf("%f",&precoProduto);
    printf("Informe o percentual de reajuste: ");
    scanf("%f",&percentual);

    //processamento
    valorReajuste = precoProduto * (percentual/100);
    valorReajustado = precoProduto + valorReajuste;

    //saida
    printf("O valor do reajuste e de: %f\nE o valor reajustado e de: %f",valorReajuste,valorReajustado);

}
