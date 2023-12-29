#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;

    do
    {
        system("cls");
        //
        char frase[201];
        char palavra[51];
        printf("Digite uma frase: ");
        fflush(stdin);
        gets(frase);
        printf("Digite uma palavra: ");
        fflush(stdin);
        gets(palavra);
        char retorno = verificaSubString(frase,palavra);

        if(retorno=='s')
        {
            printf("%c",retorno);
        }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
