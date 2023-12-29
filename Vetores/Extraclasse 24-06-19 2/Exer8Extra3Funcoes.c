#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam=10;
    int ladoA[tam];
    int ladoB[tam];
    int limite = 10;

    do
    {
        system("cls");
        //
            gerarVetorInt(ladoA,tam,limite);
            gerarVetorInt(ladoB,tam,limite);

            printf("Lado A\tLado B\tHipotenusa\n");
            hipotenusaVet(ladoA, ladoB, tam);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

