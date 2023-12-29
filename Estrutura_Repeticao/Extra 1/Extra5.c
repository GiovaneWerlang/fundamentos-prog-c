/*5) Escreva um algoritmo que imprima todos os números pares do intervalo fechado de 1 a 100. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
    system("pause");
    return(0);
}
