/*7) Ler tr�s valores que representam os lados de um tri�ngulo e determinar se esses
valores podem formar um tri�ngulo. Para formar um tri�ngulo � necess�rio que a
soma de dois lados quaisquer seja maior (ou igual, no caso de tri�ngulo com �rea zero) ao valor do outro lado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3;

    printf("Informe o primeiro lado: ");
    scanf("%d",&num1);
    printf("Informe o segundo lado: ");
    scanf("%d",&num2);
    printf("Informe o terceiro lado: ");
    scanf("%d",&num3);

    if(num1 == num2 || num1 == num3)
    {
        printf("Esses valores n�o podem formar um tri�ngulo\n");
    }
    else
    {
        printf("Esses valores podem formar um tri�ngulo\n");
    }

    system("pause");
    return(0);
}
