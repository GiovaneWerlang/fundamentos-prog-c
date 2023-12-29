#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int i;
    int tam = 10;
    int vetor[tam];
    int limiteInf = 0;
    int limiteSup = 999;

    do
    {
        system("cls");
        //
        gerarVetorIntervalo(vetor,tam,limiteInf,limiteSup);

        verificaPerfeitoVetor(vetor,tam);
        printf("\n\n");
        somaImparesVetor(vetor,tam);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

