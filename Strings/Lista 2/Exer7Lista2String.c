#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[201];
    char opcao;

    do
    {
        system("cls");
        //

        printf("Digite um texto: ");
        fflush(stdin);
        gets(texto);
        printf("Digite a opção desejada:\n ");
        printf("M para transformar tudo em maiúsculas\nm para transformar tudo em minúsculas.\n");
        fflush(stdin);
        scanf("%c",&opcao);

        converteMm(texto,opcao);

        mostrarString(texto);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}

