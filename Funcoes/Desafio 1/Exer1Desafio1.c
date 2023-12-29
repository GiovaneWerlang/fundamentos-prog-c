/*1) Fa�a uma fun��o para imprimir figuras como as a seguir
Lembrete: uma �nica fun��o deve ser usada para compor essas e outras que
atendem esse princ�pio de serem compostas por linhas e colunas, sendo impressos
caracteres espec�ficos. Cada figura � apresentada por um programa diferente, embora
utilize a mesma fun��o. A composi��o � fixa, ou seja, cada programa compor� uma �nica
figura.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pauseLimpa.h"
#include "figuras.h"

int main(void)
{
    char repetir;
    int i;

    do
    {
        system("cls");
        //
            printf("Impressora de figuras.\n");
            //imprimefig();
            imprimefig(5,'+');
            imprimefig(5,'=');
            imprimefig(5,'+');

            printf("\n");

            for(i=1;i<=5;i++)
            {
                imprimefig(i,'*');
            }
            printf("\n");
            imprimefig(5,'^');
            imprimefig(5,'^');
            imprimefig(5,'^');
            printf("\n");
            imprimefig(1,'%');
            imprimefig(3,'%');
            imprimefig(5,'&');
            imprimefig(5,'&');
            imprimefig(3,'%');
            imprimefig(1,'%');
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    naoFechar();
    return(0);
}
