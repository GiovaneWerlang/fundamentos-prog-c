/*3) Escreva um algoritmo que calcule o valor da conversão para dólares
de um valor lido em reais. Primeiro calcule o valor de saída esperado e
utilize esses valores para verificarse o seu algoritmo está correto.
Use a seguinte tabela para o teste de mesa.
EntradaSaída esperadaSaída obtida
1            |     0.33      |  0.33
10           |     3.33      |  3.33
12           |      4        |  4
20           |     6.66      |  6.66          */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float reais, dolares;

    printf("Informe o valor em reais: ");
    scanf("%f",&reais);

    dolares = reais / 3;

    printf("O valor convertido para dolares e de: %f",dolares);
}
