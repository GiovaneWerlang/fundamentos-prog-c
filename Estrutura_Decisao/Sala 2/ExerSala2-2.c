/*2) Ler três valores inteiros, encontrar e mostrar o número do meio. Observação idemao exercício anterior.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3, middle;

    printf("Informe o primeiro número: ");
    scanf("%d",&num1);
    printf("Informe o segundo número: ");
    scanf("%d",&num2);
    printf("Informe o terceiro número: ");
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
