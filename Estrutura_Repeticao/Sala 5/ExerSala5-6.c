/*6) Fazer um programa para determinar o valor S da série:
S = (x +1 / y – 10) + (x + 2 / y – 9 ) + (x+3 / y – 8) + ... + (x+10 / y -1).
Onde x e y são valores informados pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float s=0;
    int x, y, posit = 1, negat = -10;

    do
    {
        printf("Informe o valor de x: ");
        scanf("%d",&x);
        if(x<0)
        {
            printf("Informe um valor positivo. ");
        }
    }while(x<0);
    do
    {
        printf("Informe o valor de y: ");
        scanf("%d",&y);
        if(y<0)
        {
            printf("Informe um valor positivo. ");
        }
    }while(y<0);

    do
    {
        s = s + ((x + posit) / (float)(y - negat ));
        posit++;
        negat++;
    }while(posit<=10&&negat<=-1);

    printf("\nS: %f\n",s);

    system("pause");
    return(0);
}
