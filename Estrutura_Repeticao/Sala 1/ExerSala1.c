/*1) Apresentar os n�meros entre 20 e 35. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ""); //acentuara na execu��o
    int i;

    printf("N�meros entre 20 e 25\n");
    for (i=20; i<=35; i++) //i=i+1   i+=1;
    {
        printf("%d\t",i);
    }


    system("pause");
    return(0);
}
