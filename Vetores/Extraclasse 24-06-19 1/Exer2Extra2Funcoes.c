#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam=10;
    int vet1[tam];
    int i;

    do
    {
        system("cls");
        //
        int qtdeDiv235=0;
        int qtdeDivAll=0;
        float media=0;


        gerarVetorInt(vet1,tam,50);

        for(i=0;i<tam;i++)
        {
            if(vet1[i]%2==0||vet1[i]%3==0||vet1[i%5==0])
            {
                qtdeDiv235++;
                media = media + vet1[i];
            }
            else
            {
                qtdeDivAll++;
            }
        }
        int vet2[qtdeDiv235];
        int vet3[qtdeDivAll];

        for(i=0;i<tam;i++)
        {
            if(vet1[i]%2==0||vet1[i]%3==0||vet1[i%5==0])
            {
                vet2[i]=vet1[i];
            }
            else
            {
                vet3[i]=vet1[i];
            }
        }

        if(qtdeDiv235>0)
        {
            media = media/(float)qtdeDiv235;
            printf("Media dos divisiveis por 2, 3 e 5: %.2f.\n\n", media);
        }
        mostrarVetorInt(vet2,qtdeDiv235);
        printf("\n\n");
        mostrarVetorInt(vet3,qtdeDivAll);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

