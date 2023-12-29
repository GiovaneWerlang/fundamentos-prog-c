/*4) Escreva um algoritmo que dados a quantidade de litros de combustível utilizada, os
quilômetros percorridos por um automóvel e o valor do litro de combustível, calcule o
gasto em reais por km. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float litrQuant, litrValor, km, gastoKm;

    //entrada
    printf("Informe a quantidade de litros de combustivel utilizada: ");
    scanf("%f",&litrQuant);
    printf("Informe os quilometros percorridos pelo automovel: ");
    scanf("%f",&km);
    printf("Informe o valor do litro de combustivel: ");
    scanf("%f",&litrValor);

    //processamento
    gastoKm = (litrQuant * litrValor) / km;

    //saida
    printf("O gasto em reais para percorrer %.2f km e de R$: %.2f reais por km\n", km, gastoKm);

    system("pause");
    return(0);
}
