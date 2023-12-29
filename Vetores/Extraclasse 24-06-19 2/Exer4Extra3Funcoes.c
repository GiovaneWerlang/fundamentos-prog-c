#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam=100;
    int vetor[tam];
    int vetorC[4]={0};
    int i;

    do
    {
        system("cls");
        //
            gerarVetorIntervalo(vetor,tam,0,400);
            mostrarVetorInt(vetor,tam);
            printf("\n\n");
            ordenaVetor(vetor,tam);
            mostrarVetorInt(vetor,tam);

            for(i=0;i<tam;i++)
            {
                if(vetor[i]>=0&&vetor[i]<=100)
                {
                    vetorC[0]++;
                }
                else if(vetor[i]>=101&&vetor[i]<=200)
                {
                    vetorC[1]++;
                }
                else if(vetor[i]>=201&&vetor[i]<=300)
                {
                    vetorC[2]++;
                }
                else//(vetor[i]>=0&&vetor[i]<=100)
                {
                    vetorC[3]++;
                }
            }
            printf("\n\n");
            mostrarVetorInt(vetorC,4);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

