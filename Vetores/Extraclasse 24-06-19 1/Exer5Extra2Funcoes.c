#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam = 10;
    int limiteInf = 0;
    int limiteSup = 100;
    int vetor[tam];

    do
    {
        system("cls");
        //
            gerarVetorIntervalo(vetor,tam,limiteInf,limiteSup);
            verificaPrimoVetor(vetor,tam);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

