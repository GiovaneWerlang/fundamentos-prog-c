/*4) Escreva um algoritmo que imprima todos os números múltiplos de 5, no intervalo fechado de 1 a 500. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=500;i++)
    {
        if(i%5==0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
    system("pause");
    return(0);
}
