/*4) Uma revendedora de carros usados paga aos seus funcionários vendedores um salário
fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do
valor total das vendas por ele efetuadas. Escrever um algoritmo que leia o número de
carros vendidos, o valor total das vendas do funcionário, o salário fixo e o valor da
comissão recebido por carro vendido. Calcular e mostrar o salário mensal do vendedor.*/

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
