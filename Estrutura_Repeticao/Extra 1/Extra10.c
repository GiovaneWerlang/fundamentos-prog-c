/*10) Escreva um algoritmo que leia oito números e imprima o cubo de cada número.
Valor     Cubo
2         8
5        125
9        729*/

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
    for(i=1;i<=8;i++)
    {
        printf("%d\t%d\n",num[i],num[i] * num[i] * num[i]);
    }
    system("pause");
    return(0);
}
