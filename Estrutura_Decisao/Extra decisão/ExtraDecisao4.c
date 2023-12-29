/*4) Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
    a. �lcool:
    b. at� 20 litros, desconto de 3% por litro
    c. acima de 20 litros, desconto de 5% por litro
    d. Gasolina:
    e. at� 20 litros, desconto de 4% por litro
    f. acima de 20 litros, desconto de 6% por litro Escreva um algoritmo que
    leia o n�mero de litros vendidos, o tipo de combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina),
    calcule e imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do
    litro da gasolina � R$ 2,50 o pre�o do litro do �lcool � R$ 1,90. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float litros, valor;
    char AG;

    printf("Informe os litros vendidos: ");
    scanf("%f",&litros);
    printf("Informe o tipo de combust�vel: (A-�lcoo,G-gasolina)");
    fflush(stdin);
    scanf("%c",&AG);

    if(AG == 'A')
    {
        if(litros<=20)
        {
            valor=litros * 1.90 +((litros * 1.90) * (3/100));
            printf("Valor a ser pago R$:%.2f\n",valor);
        }
        else
        {
            valor=litros * 1.90 +((litros * 1.90) * (5/100));
            printf("Valor a ser pago R$:%.2f\n",valor);
        }
    }
    else if(AG == 'G')
    {
        if(litros<=20)
        {
            valor=litros * 2.50 +((litros * 1.90) * (4/100));
            printf("Valor a ser pago R$:%.2f\n",valor);
        }
        else
        {
            valor=litros * 2.50 +((litros * 1.90) * (6/100));
            printf("Valor a ser pago R$:%.2f\n",valor);
        }
    }
    system("pause");
    return(0);
}
