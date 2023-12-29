/*2) Elaborar um programa para mostrar, em ordem decrescente, os números divisíveis por 3 e
por 5 entre 200 e 100.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    printf("Números divisíveis por 3 e por 5\nentre 200 e 100.\n");
    for(i=200;i>=100;i--)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d\t",i);
        }
    }
    printf(" \n");
    system("pause");
    return(0);
}

