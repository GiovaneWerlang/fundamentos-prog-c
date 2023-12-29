#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam=30;
    int limiteInf = 10;
    int limiteSup = 30;
    int vetor[tam];
    int i;
    int retornoM;
    int retornoP;

    do
    {
        system("cls");
        //
        int qtdeM=0;
        int qtdeP=0;
        int qtdeI=0;

        gerarVetorIntervalo(vetor,tam,limiteInf,limiteSup);

        mostrarVetorIntLinha(vetor,tam);

        for(i=0;i<tam;i++)
        {
            retornoM = verificaMulti(vetor,i,5);
            retornoP = verificaPar(vetor,i);
            if(retornoM == 1)
            {
                qtdeM++;
            }

            else if(retornoP == 1)
            {
                qtdeP++;
            }
            //retornoI = verificaImpa
            else//(retorno == 1)
            {
                qtdeI++;
            }
        }

        int vetorM[qtdeM];
        int vetorP[qtdeP];
        int vetorI[qtdeI];
        int j=0,k=0,l=0;

        for(i=0;i<tam;i++)
        {
            retornoM = verificaMulti(vetor,i,5);
            retornoP = verificaPar(vetor,i);
            if(retornoM == 1)
            {
                vetorM[j]=vetor[i];
                j++;
            }

            else if(retornoP == 1)
            {
                vetorP[k]=vetor[i];
                k++;
            }
            //retornoI = verificaImpa
            else//(retorno == 1)
            {
                vetorI[l]=vetor[i];
                l++;
            }
        }

        mostrarVetorIntLinha(vetorM,qtdeM);
        printf("\n\n");
        mostrarVetorIntLinha(vetorP,qtdeP);
        printf("\n\n");
        mostrarVetorIntLinha(vetorI,qtdeI);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

