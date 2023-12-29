/*7) Fazer um programa que calcule o valor de S com n informado pelo usuário,
determinado pela série: S = (n-1 *n) / 1 + (n-2 * n-1) / 2 + (n-3 * n-2) / 3 + ... (1 * 2) / n-1.
Para n = 38:S = (37 * 38) / 1 + (36 * 37) / 2 + (35 * 36) / 3 + ... + (1 * 2) / 37    */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float s=0;
    int ex=1, n, n2, sub=2, sub2=1;

    do
    {
        printf("Informe o valor: ");
        scanf("%d",&n);
        if(n<0)
        {
            printf("Informe um valor positivo.");
        }
    }while(n<0);
    n2=n;
    s = ((n-1) *n2);
    do
    {
        if(n-sub!=1&&n2-sub2!=2)
        {
        s = s/((float)ex+(n - sub)* (n2 - sub2));
        ex++;
        sub++;
        sub2++;
        }
    }while(n-sub!=1&&n2-sub2!=2);

    s = s / n-1;

    printf("\nS: %f\n",s);

    system("pause");
    return(0);
}
