/*11) Escreva um algoritmo que leia oito números e imprima a raiz quadrada de cada número.
Valor     Raiz
4        2
5        2,24
9        3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
        printf("%d\t%d\n",num[i],sqrt(num[i]));
    }

    system("pause");
    return(0);
}
