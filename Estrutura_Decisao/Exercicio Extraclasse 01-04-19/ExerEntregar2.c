/*2) Ler dois valores num�ricos e apresentar a diferen�a entre eles. A diferen�a sempre �
positiva, portanto, o menor � subtra�do do maior n�o importando a ordem em que os
n�meros s�o informados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, diferenca;

    printf("Informe o primeiro n�mero: ");
    scanf("%d",&num1);
    printf("Informe o segundo n�mero: ");
    scanf("%d",&num2);

    if(num1>= num2)
    {
        diferenca = num1 -num2;
        printf("A diferenca entre %d e %d �: %d\n",num1, num2 ,diferenca); //mensagem igual poderia estar fora
    }
    else
    {
        diferenca = num2-num1;
        printf("A diferenca entre %d e %d �: %d\n",num1, num2 ,diferenca);
    }

    system("pause");
    return(0);
}
