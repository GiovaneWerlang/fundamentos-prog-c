#include <stdio.h>

int main(void)
{
    //variaveis
    float salFixo, salFinal, vendas, comissao;

    //entrada
    printf("Insira o salario: ");
    scanf("%f",&salFixo);
    printf("Insira o valor de vendas: ");
    scanf("%f",&vendas);

    //processamento
    comissao = vendas * ((float)4/100);
    salFinal = salFixo + (float)comissao;

    //saida
    printf("A comissao do funcionario e de: %f",comissao);
    printf("E o salario final e de: %f",salFinal);

}
