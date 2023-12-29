#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[51];
    char copia[51];

    do
    {
        system("cls");
        //
        int i=0;
        int j=0;

        printf("Digite um texto: ");
        fflush(stdin);
        gets(texto);

        while(texto[i]==' ')
        {
            i++;
        }
        while(texto[i]!='\0')
        {
            copia[j] = texto[i];
            i++;
            j++;
        }
        copia[j]='\0';
        mostrarString(copia);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}

