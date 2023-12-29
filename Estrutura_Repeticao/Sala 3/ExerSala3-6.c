/*6) Apresente os pares entre entre 0 e 100, sem utilizar if dentro do for.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=100;i++)
    {
        for(;i%2==0;)
        {
            printf("%d\t",i);
            break;
        }
    }
    printf("\n");
    system("pause");
    return(0);
}
