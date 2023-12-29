#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam;
    int i;
    int limiteInf;
    int limiteSup;

    do
    {
        system("cls");
        //
        int qtdeM = 0;

        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d",&tam );
        }while(tam<=0);

        do
        {
            printf("Informe o limite inferior: ");
            scanf("%d",&limiteInf );
        }while(limiteInf<0);

        do
        {
            printf("Informe o limite superior: ");
            scanf("%d",&limiteSup );
        }while(limiteSup<=0);

        if(limiteSup<limiteInf)
        {
            i = limiteSup;
            limiteSup = limiteInf;
            limiteInf = i;
        }

        int vetor[tam];

        gerarVetorIntervalo(vetor,tam,limiteInf,limiteSup);
        mostrarVetorInt(vetor,tam);
        printf("\n\n");
        mostraMultiplosVetor(vetor,tam,5);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

