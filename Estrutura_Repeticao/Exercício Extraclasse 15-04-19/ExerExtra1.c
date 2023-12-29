/*1) Elaborar um programa para mostrar os números pares entre 10 e 100. Fazer a média dos
valores desse intervalo que são divisíveis por 5.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    float media;
    int divisiveis;
    int numVal;
    media=0;
    numVal =0;
    divisiveis =0;

    printf("Números pares entre 10 e 100:\n");
    for(i=10;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
        else if(i%5==0)
        {
            divisiveis = divisiveis + i;
            numVal = numVal + 1;
        }
    }
    printf("\n\nMedia:\n");
    media = (float)divisiveis / numVal;
    printf("%.2f\n",media);
    system("pause");
    return(0);
}
