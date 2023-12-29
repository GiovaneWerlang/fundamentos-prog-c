#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char endereco[20][51];

    do
    {
        system("cls");
        //
        int i=0;
        int r=0;
        int a=0;
        endereco[0][0] = 'A';

        while(i<20)
        {
            gets(endereco[i]);
            fflush(stdin);
            if(endereco[i][0]=='R'||endereco[i][0]=='A')
            {
                if(endereco[i][0]=='R')
                {
                    r++;
                }
                else
                {
                    a++;
                }
            }
            else
            {
                i=20;
            }
            i++;
        }
        printf("\nNomes de rua informados: %d vezes\n", r);
        if(a>0)
        {
            for(i=1;i<=a;i++)
            {
                printf("1\t");
            }
        }

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

