//2) Escreva um algoritmo que leia um número e verifique se ele é maior, menor ou igual a 10.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Informe um número inteiro: ");
    scanf("%d",&num);

    if(num > 10)
    {
        printf("%d é maior que 10\n",num);
    }
    else if(num == 10)
    {
        printf("%d é igual a 10\n",num);
    }
    else
    {
        printf("%d é menor 10\n",num);
    }

    system("pause");
    return(0);
}
