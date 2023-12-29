/*1) Apresentar os números entre 20 e 35. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ""); //acentuara na execução
    int i;

    printf("Números entre 20 e 25\n");
    for (i=20; i<=35; i++) //i=i+1   i+=1;
    {
        printf("%d\t",i);
    }


    system("pause");
    return(0);
}
