/*4) Uma revendedora de carros usados paga aos seus funcion�rios vendedores um sal�rio
fixo por m�s, mais uma comiss�o tamb�m fixa para cada carro vendido e mais 5% do
valor total das vendas por ele efetuadas. Escrever um algoritmo que leia o n�mero de
carros vendidos, o valor total das vendas do funcion�rio, o sal�rio fixo e o valor da
comiss�o recebido por carro vendido. Calcular e mostrar o sal�rio mensal do vendedor.*/

#include <stdio.h>

int main(void)
{
    //variaveis
    float carrosVendidos, totalVendas, porcentagemDoTotal, salarioFixo, comissao,valorComissao, salarioMensal;

    //entrada
    printf("Informe o salario fixo: ");
    scanf("%f",&salarioFixo);
    printf("Informe o total de vendas: ");
    scanf("%f",&totalVendas);
    printf("Informe o numero de carros vendidos: ");
    scanf("%f",&carrosVendidos);
    printf("Informe a comissao por carro vendido: ");
    scanf("%f",&comissao);

    //processamento
    valorComissao = carrosVendidos * comissao;
    porcentagemDoTotal = totalVendas * ((float)5/100);
    salarioMensal = salarioFixo + valorComissao + porcentagemDoTotal;

    //saida
    printf("O salario mensal do vendedor e de: %f ",salarioMensal);

    }
