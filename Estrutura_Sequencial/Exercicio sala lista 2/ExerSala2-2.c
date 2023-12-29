/*2) O custo ao consumidor  de um carro novo é a soma do custo de fábrica
com a percentagem do distribuidor e a percentagem dos impostos (ambas aplicadas sobre o
custo de fábrica). Escrever um algoritmo para, a partir do custo de fábrica do carro,
calcular e mostrar o custo ao consumidor.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float custoFabrica, custoConsumidor, perDistri, perImpos;

    //entrada
    printf("Informe o custo de fabrica do carro: ");
    scanf("%f",&custoFabrica);
    printf("Informe a percentagem do distribuidor: ");
    scanf("%f",&perDistri);
    printf("Informe a percentagem dos impostos: ");
    scanf("%f",&perImpos);

    custoConsumidor = custoFabrica + (custoFabrica * perDistri/100) + (custoFabrica * perImpos/100);

    printf("O custo ao consumidor e de: %f\n",custoConsumidor);

    system("pause");
    return(0);
}
