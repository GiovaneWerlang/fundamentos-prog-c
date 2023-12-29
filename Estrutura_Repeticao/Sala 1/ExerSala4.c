/*4) Apresentar os números entre 10 e 0, ou seja, em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char cont;

    for(i=10;i>=0;i--)//i= i-1; i-=1
    {
        printf("%d\n",i);
    }
    printf("\n\nAlfabeto\n");

    for(cont='a';cont <= 'z';cont++)
    {
        printf("%c",cont);
    }
    printf("\nTabela ASCII\n");

    for(i=33;i<=255;i++)
    {
        printf("%d   %c\n",i,i);
    }
    system("pause");
    return(0);
}
