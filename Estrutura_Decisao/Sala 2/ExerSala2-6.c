/*6) Um hotel cobra R$ 210,00 por di�ria mais uma taxa de servi�os de acordo com:
R$ 10,50 por di�ria, se o n�mero de di�rias for maior que 15;
R$ 16,00 por di�ria, se o n�mero de di�rias for igual a 15;
R$ 18,00 por di�ria, se o n�mero de di�rias for menor que 15.
Elaborar um programa para determinar o valor a ser pago pelo cliente.
Se informado zero ou valor negativo para a quantidade de di�rias n�o realizar o c�lculo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor;
    int numDiarias;

    printf("Informe o n�mero de di�rias: ");
    scanf("%d",&numDiarias);

    if(numDiarias<=0)
    {
        printf("Imposs�vel realizar o c�lculo de 0 di�rias\n");
    }
    else if (numDiarias<15)
    {
        valor = (18 * numDiarias) + 210;
    }
    else if (numDiarias>15)
    {
        valor = (10.50 * numDiarias) + 210;
    }
    else
    {
        valor = (16 * numDiarias) + 210;
    }
    printf("O valor a ser pago e %.2f\n",valor);
    system("pause");
    return(0);
}
