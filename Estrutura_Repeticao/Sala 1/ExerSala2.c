/*2) Apresentar os múltiplos de 5, entre 5 e 50.*/

#include <stdio.h>
#include <stdlib.h>

int i;
//i =5;

int main(void)
{
    for ( i=5;i<=50;i=i+5)//i+=5
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }

    }

    system("pause");
    return(0);
}
