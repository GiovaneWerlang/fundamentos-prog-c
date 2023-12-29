/*5) Apresentar os números ímpares entre 100 e 50, ou seja, em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=100;i>=50;i-=1)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    printf("\n\nVerde\n");

    for(99;i>=51;i=i-2)
    {
        printf("%d\t",i);
    }


    system("pause");
    return(0);
}
