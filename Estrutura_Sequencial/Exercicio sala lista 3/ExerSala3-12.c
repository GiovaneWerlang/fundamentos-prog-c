/*12 Desafio) A equipe ABC deseja calcular o número mínimo de litros que deverá colocar no tanque de seu carro
para que ele possa percorrer um determinado número de voltas até o primeiro reabastecimento.
Escreva um programa que leia o comprimento da pista (em metros), o número total de voltas a serem percorridas no grande prêmio,
o número de reabastecimentos desejados e o consumo de combustível do carro (em Km/L).
Calcular e escrever o número mínimo de litros necessários para percorrer até o primeiro reabastecimento.
Obs.: Considere que o número de voltas entre os reabastecimentos é o mesmo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float compPista, numVoltas, reabast, consumo, litros;

    //entrada
    printf("Informe o comprimento da pista: ");
    scanf("%f",&compPista);
    printf("Informe o numero de voltas: ");
    scanf("%f",&numVoltas);
    printf("Informe o numero de reabastecimentos desejados: ");
    scanf("%f",&reabast);
    printf("Informe o consumo de combustivel do carro: ");
    scanf("%f",&consumo);

    litros = (((compPista * numVoltas) / consumo)/reabast+0.999999);

    printf("Os litros necessarios ate o primeiro reabastecimento sao: %.0f\n",litros);

    system("pause");
    return(0);
}
