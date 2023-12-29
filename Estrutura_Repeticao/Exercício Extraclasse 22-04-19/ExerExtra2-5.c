/*5) Escreva um programa que determine a soma dos n primeiros termos (informado pelo usuário)
que inicia com 500 e se necessário vai para números negativos.
S = 2/500 - 5/450 + 2/400 - 5/350...*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, num, soma;


    printf("Informe um número: ");
    scanf("%d",&num);

    if(num<500)
    {
        for(i=500;i>=num;i--)
        {
            soma = soma + i;
        }
    }
    for(i=500;i<=num;i++)
    {
        soma = soma +i;
    }
    printf("A soma dos termos e igual a: %d\n",soma);

    system("pause");
    return(0);
}
