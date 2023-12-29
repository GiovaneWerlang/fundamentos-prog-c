/*3) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor
informado pelo usuário :
Soma = 1 + 1/2  + 1/3 + 1/4   +   1/5 + ... + 1/n  */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int i;
    float soma;
    soma = 0;

    printf("Informe um número: ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        soma = soma + ((float)1/i);
    }
    printf("%.2f\n",&soma);

    system("pause");
    return(0);
}
