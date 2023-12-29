/*3) Apresentar os números entre 0 e 5, com intervalo de 0.25 entre eles, ou seja, 0, 0.25,0.5, 0.75 ... 5.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float i;

    for (float i=0.0f;i<=5.0f;i+=0.25f)
    {
        printf("%.2f\n",i);
    }


    system("pause");
    return(0);
}
