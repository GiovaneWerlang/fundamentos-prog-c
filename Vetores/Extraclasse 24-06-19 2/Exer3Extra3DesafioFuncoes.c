#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam = 15;
    int vetor[tam];
    int limiteInf = 1;
    int limiteSup = 6;
    int qtde[6]={0};
    int i;

    do
    {
        system("cls");
        //
            gerarVetorIntervalo(vetor,tam,limiteInf,limiteSup);
            mostrarVetorIntLinha(vetor,tam);

            for(i=0;i<tam;i++)
            {
                if(vetor[i]==1)
                {
                    qtde[0]++;
                }
                else if(vetor[i]==2)
                {
                    qtde[1]++;
                }
                else if(vetor[i]==3)
                {
                    qtde[2]++;
                }
                else if(vetor[i]==4)
                {
                    qtde[3]++;
                }
                else if(vetor[i]==5)
                {
                    qtde[4]++;
                }
                else
                {
                    qtde[5]++;
                }
            }
            printf("\nValor\tOcorrências\n");
            for(i=0;i<=5;i++)
            {
                printf("%d\t%d\n",i+1,qtde[i]);
            }

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

