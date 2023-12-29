#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam=15;
    int vetA[tam];
    int vetB[tam];
    int i;

    do
    {
        system("cls");
        //
            gerarVetorInt(vetA,tam,99);
            for(i=0;i<tam;i++)
            {
                vetB[i] = vetA[i] * vetA[i];
            }
            mostrarVetorInt(vetA,tam);
            printf("\n");
            mostrarVetorInt(vetB,tam);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
