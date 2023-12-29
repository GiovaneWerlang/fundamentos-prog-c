/*1) As Organiza��es Abc resolveram dar aumento de sal�rio aos seus colaboradores e
lhe contrataram para desenvolver o programa que calcular� os reajustes.
Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
    � sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
    � sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
    � sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
    � sal�rios de R$ 1500,00 em diante : aumento de 5%
Ap�s o aumento ser realizado, informe na tela:
    � o sal�rio antes do reajuste;
    � o percentual de aumento aplicado;
    � o valor do aumento;
    � o novo sal�rio, ap�s o aumento.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salC, reajuste, salF;

    printf("Infome o sal�rio: ");
    scanf("%f",&salC);
    if(salC<=0)
    {
        printf("Valor inv�lido.\n");
    }
    else if(salC<=280)
    {
        reajuste=salC * ((float)20/100);
        salF = salC + reajuste;
        printf("Sal�rio antes do reajuste: R$ %.2f\n",salC);
        printf("Percentual de aumento: 20 %%\n");
        printf("Valor do aumento: R$ %f.2f\n",reajuste);
        printf("Sal�rio ap�ss o reajuste: R$ %.2f\n",salF);
    }
    else if(salC>280 && salC<=700)
    {
        reajuste=salC * ((float)15/100);
        salF = salC + reajuste;
        printf("Sal�rio antes do reajuste: R$ %.2f\n",salC);
        printf("Percentual de aumento: 15 %%\n");
        printf("Valor do aumento: R$ %.2f\n",reajuste);
        printf("Sal�rio ap�ss o reajuste: R$ %.2f\n",salF);
    }
    else if (salC>700 && salC<1500)
    {
        reajuste=salC * ((float)10/100);
        salF = salC + reajuste;
        printf("Sal�rio antes do reajuste: R$ %.2f\n",salC);
        printf("Percentual de aumento: 10 %%\n");
        printf("Valor do aumento: R$ %.2f\n",reajuste);
        printf("Sal�rio ap�ss o reajuste: R$ %.2f\n",salF);
    }
    else
    {
        reajuste=salC * ((float)5/100);
        salF = salC + reajuste;
        printf("Sal�rio antes do reajuste: R$ %.2f\n",salC);
        printf("Percentual de aumento: 5 %%\n");
        printf("Valor do aumento: R$ %.2f\n",reajuste);
        printf("Sal�rio ap�ss o reajuste: R$ %.2f\n",salF);
    }

    system("pause");
    return(0);
}
