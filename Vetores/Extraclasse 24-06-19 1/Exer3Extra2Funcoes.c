#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam = 100;
    int limiteInf = 0;
    int limiteSup = 400;
    int vet1[tam];
    int vet2[4] = {0,0,0,0};
    int i;

    do
    {
        system("cls");
        //
            gerarVetorIntervalo(vet1 , tam, limiteInf, limiteSup);

            for(i=0;i<tam;i++)
            {
                if(vet1[i]>=0&&vet1[i]<=100)
                {
                    vet2[0] = vet2[0] + 1;
                }
                else if(vet1[i]>=101&&vet1[i]<=200)
                {
                    vet2[1]++;
                }
                else if(vet1[i]>=201&&vet1[i]<=300)
                {
                    vet2[2]++;
                }
                else if(vet1[i]>=301&&vet1[i]<=400)
                {
                    vet2[3]++;
                }
            }
            mostrarVetoresInt(vet2, 4);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

