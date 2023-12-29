#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    char retorno;
    int tam=10;
    int limiteInf = 10;
    int limiteSup = 2000;
    int vetor[tam];
    int qtdeP;
    int i;

    do
    {
        system("cls");
        //
            gerarVetorIntervalo(vetor,tam,limiteInf,limiteSup);
            qtdeP=0;

            for(i=0;i<tam;i++)
            {
                retorno = veriRetornaPrimoVetor(vetor,i);
                if(retorno == 's')
                {
                    qtdeP++;
                }
            }
            int vetorP[qtdeP];
            if(qtdeP>0)
            {

                int j=0;

                for(i=0;i<tam;i++)
                {
                    retorno = veriRetornaPrimoVetor(vetor,i);
                    if(retorno == 's')
                    {
                        vetorP[j] = vetor[i];
                        j++;
                    }
                }
            }

            mostrarVetorInt(vetor,tam);
            printf("\n\n");

            if(qtdeP>0)
            {
                mostrarVetorInt(vetorP,qtdeP);
            }


        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
