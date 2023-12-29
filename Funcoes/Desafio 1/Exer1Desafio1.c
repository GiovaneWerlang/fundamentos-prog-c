/*1) Faça uma função para imprimir figuras como as a seguir
Lembrete: uma única função deve ser usada para compor essas e outras que
atendem esse princípio de serem compostas por linhas e colunas, sendo impressos
caracteres específicos. Cada figura é apresentada por um programa diferente, embora
utilize a mesma função. A composição é fixa, ou seja, cada programa comporá uma única
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
