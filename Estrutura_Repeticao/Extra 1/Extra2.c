/*2) Escreva um algoritmo que imprima todos os números inteiros de 100 a 1 (em ordem decrescente).*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=100;i>=1;i--)
    {
        printf("%d\t",i);
    }
    printf("\n");
    system("pause");
    return(0);
}
