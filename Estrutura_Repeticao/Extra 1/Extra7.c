/*7) Escreva um algoritmo que imprima o quadrado dos números no intervalo fechado de 1 a 20.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int quadrado;

    for(i=1;i<=20;i++)
    {
        quadrado = i * i;
        printf("%d\t",quadrado);
        quadrado = 0;
    }
    printf("\n");
    system("pause");
    return(0);
}
