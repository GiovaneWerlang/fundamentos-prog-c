/*1) Uma pessoa foi ao supermercado e comprou tr�s produtos. Voc� pode determinar o
nome dos produtos. Fazer um algoritmo (programa) para ler a quantidade de cada um
dos produtos comprados e o seu valor unit�rio. Calcular o valor total de cada tipo de
produto e o valor total da compra. Mostrar o nome do produto, a quantidade comprada e
o pre�o de cada produto, bem como o valor total da compra. Aten��o para declarar as
vari�veis do tipo adequado para cada produto. */

#include <stdio.h>

int main(void)
{
    //variaveis
    float valorproduto1, valorproduto2, valorproduto3, custo1, custo2, custo3, custototal;
    int qtdproduto1, qtdproduto2, qtdproduto3;

    //entradas
    printf("Informe o preco do quilo da farinha: ");
    scanf("%f",&valorproduto1);
    printf("Informe a quantidade de quilos de farinha: ");
    scanf("%d",&qtdproduto1);
    printf("Informe o preco da caixa de chocolate: ");
    scanf("%f",&valorproduto2);
    printf("Informe a quantidade de caixas de chocolate: ");
    scanf("%d",&qtdproduto2);
    printf("Informe o preco da unidade da cuca recheada: ");
    scanf("%f",&valorproduto3);
    printf("Informe a quantidade de cucas recheadas: ");
    scanf("%d",&qtdproduto3);
    printf("////////////////////////////////////////////////\n\n");

    //processamento
    custo1 = valorproduto1 * qtdproduto1;
    custo2 = valorproduto2 * qtdproduto2;
    custo3 = valorproduto3 * qtdproduto3;
    custototal = custo1 + custo2 + custo3;

    //saida
    printf("Quilos de farinha comprados: %d Custando:R$ %f\n",qtdproduto1,custo1);
    printf("Caixas de chocolate compradas: %d Custando:R$ %f\n",qtdproduto2,custo2);
    printf("Unidades de cuca recheada compradas: %d Custando:R$ %f\n",qtdproduto3,custo3);
    printf("Custo total da compra:R$ %f\n",custototal);
    printf("Volte sempre!");



}
