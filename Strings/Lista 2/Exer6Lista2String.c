#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[201];
    char primeiras[201];

    do
    {
        system("cls");
        //
        printf("Digite uma string: ");
        fflush(stdin);
        gets(texto);

        int i=0;
        int j=0;
        while(texto[i]!= '\0')
        {
            while(texto[i]==' ')
            {
                i++;
            }
            if(i==0)
            {
                primeiras[0]=texto[i];
                j++;
            }
            else if(i>0)
            {
                if(texto[i-1]==' ')
                {
                    primeiras[j]=texto[i];
                    j++;
                }

            }
            i++;
        }

        primeiras[j]='\0';

        mostrarString(primeiras);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
