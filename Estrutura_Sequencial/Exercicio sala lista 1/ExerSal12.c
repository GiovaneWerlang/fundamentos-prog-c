/*12)O que faz o algoritmo a seguir? Implemente-o utilizando a linguagem C
In�cio
Sal�rio atual
Percentual reajuste
Valor reajuste
Sal�rio reajustado
Fim
Sal�rio reajustado*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float salarioAtual, salarioReajustado, percentualReajuste, valorReajuste;

    //entrada
    printf("Insira o valor do salario: ");
    scanf("%f",&salarioAtual);
    printf("Insira o percentual do reajuste: ");
    scanf("%f",&percentualReajuste);

    //processamento
    valorReajuste = salarioAtual * (percentualReajuste / 100)  ;
    salarioReajustado = salarioAtual + valorReajuste;

    //saida
    printf("O reajuste do salario e de: %.2f\n",valorReajuste);
    printf("O salario reajustado e de: %.2f\n",salarioReajustado);

    system("pause");
    return(0);
}
