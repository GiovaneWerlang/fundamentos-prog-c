/*6) Um hotel cobra R$ 210,00 por diária mais uma taxa de serviços de acordo com:
R$ 10,50 por diária, se o número de diárias for maior que 15;
R$ 16,00 por diária, se o número de diárias for igual a 15;
R$ 18,00 por diária, se o número de diárias for menor que 15.
Elaborar um programa para determinar o valor a ser pago pelo cliente.
Se informado zero ou valor negativo para a quantidade de diárias não realizar o cálculo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor;
    int numDiarias;

    printf("Informe o número de diárias: ");
    scanf("%d",&numDiarias);

    if(numDiarias<=0)
    {
        printf("Impossível realizar o cálculo de 0 diárias\n");
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
