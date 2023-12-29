#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[201];
    //int retorno;

    do
    {
        system("cls");
        //
        printf("Digite uma frase: ");
        fflush(stdin);
        gets(texto);
        //contaString(texto);
        int i=0;
        int j=0;
        int k=0;

        while(texto[i]!='\0')
        {
            if(i%2==0)
            {
                j++;
            }
            else
            {
                k++;
            }
            i++;
        }

        char textoPar[j+1];
        char textoImpar[k+1];
        int aux1 = j;
        int aux2 = k;

        i=0;
        j=0;
        k=0;
        while(texto[i] != '\0')
        {
            if(i%2==0)
            {
                textoPar[j] = texto[i];
                j++;
            }
            else
            {
                textoImpar[k] = texto[i];
                k++;
            }
            i++;
        }

        textoPar[j] = '\0';
        textoImpar[k] = '\0';
        printf("\n%s",texto);
        printf("\n%s",textoPar);
        printf("\n%s",textoImpar);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
