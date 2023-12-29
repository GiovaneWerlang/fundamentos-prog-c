#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int vetA[30];
    int vetB[30];
    int i;

    do
    {
        system("cls");
        //
        gerarVetorInt(vetA,30,50);

        armazenaParesVetor(vetA,30);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

