/*2) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do
número de pessoas e valor do ingresso. O valor do ingresso vai de R$ 15 até 20,aumentando de 0,50 centavos.
É informada a quantidade de pessoas.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float qtdpessoas;
    float ingresso;
    float i;

    printf("Informe a quantidade de pessoas: ");
    scanf("%f",&qtdpessoas);
    printf("Valor do ingresso\t\tValor total recebido\n");

    for(i=15.00;i<=20.00;i=i+0.50)
    {
        ingresso = qtdpessoas * i;
        printf("%.2f \t\t\t\t %.2f\n",i,ingresso);
    }

    system("pause");
    return(0);
}
