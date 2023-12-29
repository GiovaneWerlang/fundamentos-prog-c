/*7) Ler três valores que representam os lados de um triângulo e determinar se esses
valores podem formar um triângulo. Para formar um triângulo é necessário que a
soma de dois lados quaisquer seja maior (ou igual, no caso de triângulo com área zero) ao valor do outro lado.*/

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
        printf("Esses valores não podem formar um triângulo\n");
    }
    else
    {
        printf("Esses valores podem formar um triângulo\n");
    }

    system("pause");
    return(0);
}
