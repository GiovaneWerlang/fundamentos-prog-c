/*9) Escreva um algoritmo que leia oito números e imprima o quadrado de cada número.
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
        printf("Informe um número: ");
        scanf("%d",&num[i]);
    }
    for(c=1;c<=8;c++)
    {
        printf("%d\t%d\n",num[c],num[c] * num[c]);
    }

    system("pause");
    return(0);
}
