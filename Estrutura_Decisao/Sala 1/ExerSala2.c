//2) Escreva um algoritmo que leia um n�mero e verifique se ele � maior, menor ou igual a 10.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Informe um n�mero inteiro: ");
    scanf("%d",&num);

    if(num > 10)
    {
        printf("%d � maior que 10\n",num);
    }
    else if(num == 10)
    {
        printf("%d � igual a 10\n",num);
    }
    else
    {
        printf("%d � menor 10\n",num);
    }

    system("pause");
    return(0);
}
