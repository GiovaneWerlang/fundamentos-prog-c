#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char email[51];

    do
    {
        system("cls");
        //
        printf("Digite um endereço de e-mail: ");
        fflush(stdin);
        gets(email);
        int retorno;

        retorno = validaEmail(email);
        printf("%c\t",retorno);


        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}


