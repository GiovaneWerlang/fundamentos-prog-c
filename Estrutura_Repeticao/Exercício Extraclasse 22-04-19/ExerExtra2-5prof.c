/*5) Escreva um programa que determine a soma dos n primeiros termos (informado pelo usuário)
que inicia com 500 e se necessário vai para números negativos.
S = 2/500 - 5/450 + 2/400 - 5/350...*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, den, n;
    float s=0;
    den=500;

    printf("Informe o número de termos: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(den!=0)
        {
            if(i%2!=0)
            {
                s = s + 2.0/den;
            }
            else
            {
                s = s - 5.0/den;
            }
        }
        den = den -50;
    }

    printf("A soma dos termos e igual a: %.2f\n",s);

    system("pause");
    return(0);
}
