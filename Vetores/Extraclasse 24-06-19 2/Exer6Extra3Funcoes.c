#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam=20;
    int limiteInf=0;
    int limiteSup=15;
    int vetor[tam];
    int retorno;
    int i;

    do
    {
        system("cls");
        //
            gerarVetorIntervalo(vetor,tam,limiteInf,limiteSup);
            mostrarVetorInt(vetor,tam);

            retorno = contaIntervaloVetor(vetor,tam,0,10);

            int vetor10[retorno];
            int j=0;
            for(i=0;i<tam;i++)
            {
                if(vetor[i]<10)
                {
                    vetor10[j]=vetor[i];
                    j++;
                }
            }
            printf("\n\n");
            mostrarVetorInt(vetor10,retorno);
            for(i=0;i<retorno;i++)
            {
                vetor10[i] = fatorialVetor(vetor10,i);
            }
            printf("\n\n");
            mostrarVetorInt(vetor10,retorno);


        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

