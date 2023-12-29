/*6) Escreva um algoritmo que imprima os 100 primeiros números ímpares.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,c;
    c = 0;

    for(i=0;c<=100;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            c = c + 1;
        }
    }
    printf("\n");
    system("pause");
    return(0);
}
