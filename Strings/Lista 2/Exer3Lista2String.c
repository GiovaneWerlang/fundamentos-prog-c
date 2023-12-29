#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char nome[51];
    char aux[51];

    do
    {
        system("cls");
        //
        printf("Digite uma frase: ");
        fflush(stdin);
        gets(nome);
        int i=0;
        int j=0;

        while(nome[i]==' ')
        {
            i++;
        }
        while(nome[i]!='\0')
        {
            if(nome[i]!=' ')
            {
                nome[j]=nome[i];
                j++;
            }
            else if(nome[i+1]!=' '&&nome[i+1]!='\0')
            {
                nome[j]=nome[i];
                j++;
            }

            i++;
        }
        nome[j]='\0';
        printf("\n");
        mostrarString(nome);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

