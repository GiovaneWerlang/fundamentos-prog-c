#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[101];

    do
    {
        system("cls");
        //
        int i=0;
        int aux=0;
        printf("Digite uma frase: ");
        fflush(stdin);
        gets(texto);
        if(texto[0]==' ')
            {
                while(texto[i]==' ')
                {
                    aux++;
                    i++;
                }
                printf("%d\t",aux);
                aux=0;
            }
        while(texto[i]!= '\0')
        {
            while(texto[i]!=' '&&texto[i]!= '\0')
            {
                i++;
            }
            while(texto[i]==' '&& texto[i]!= '\0')
            {
                aux++;
                i++;
            }
            if(aux>0)
            {
                printf("%d\t",aux);
                aux =0;
            }


            i++;
        }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
