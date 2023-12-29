/*5) Escreva um programa que determine a soma dos n primeiros termos (informado pelo
usuário) que inicia com 500 e se necessário vai para números negativos. S = 2/500 - 5/450 + 2/400 - 5/350...*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, den=500,i;
    float soma=0;

    do
    {
        printf("Informe um valor: ");
        scanf("%d",&n);
        if(n<0)
        {
            printf("O valor deve ser positivo.");
        }
    }while(n<0);

    for(i=1;i<=n;i++)
    {
        if(den!=0)
        {
            soma = soma + (2.0/den);
        }
        else
        {
            soma = soma - (5.0/den);
        }
        den = den - 50;
    }

    printf("\nS: %f\n",soma);

    system("pause");
    return(0);
}
