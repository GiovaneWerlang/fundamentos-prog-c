/*2) Ler tr�s valores inteiros, encontrar e mostrar o n�mero do meio. Observa��o idemao exerc�cio anterior.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3, middle;

    printf("Informe o primeiro n�mero: ");
    scanf("%d",&num1);
    printf("Informe o segundo n�mero: ");
    scanf("%d",&num2);
    printf("Informe o terceiro n�mero: ");
    scanf("%d",&num3);

    if(num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3)
    {
        middle = num1;
    }
    else if (num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3)
    {
        middle = num2;
    }

    else
    {
        middle = num3;
    }

    printf("O numero do meio entre %d e %d e %d: %d\n",num1, num2, num3, middle);
    system("pause");
    return(0);
}
