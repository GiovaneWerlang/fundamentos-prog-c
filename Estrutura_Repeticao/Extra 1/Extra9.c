/*9) Escreva um algoritmo que leia oito n�meros e imprima o quadrado de cada n�mero.
Valor     Quadrado
8        64
5        10
9        81*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[8];
    int i;
    int c;

    for(i=1;i<=8;i++)
    {
        printf("Informe um n�mero: ");
        scanf("%d",&num[i]);
    }
    for(c=1;c<=8;c++)
    {
        printf("%d\t%d\n",num[c],num[c] * num[c]);
    }

    system("pause");
    return(0);
}
