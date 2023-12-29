#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

void mostraVetorPI(int vetor[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]%2==0)
        {
            printf("%d é par.\n",vetor[i]);
        }
        else
        {
            printf("%d é impar.\n",vetor[i]);
        }
    }
}

int main(void)
{
    char repetir;
    int tam=10;
    int vet[tam];
    int i;

    do
    {
        system("cls");
        //
        gerarVetorInt(vet,tam,100);
        mostraVetorPI(vet, tam);
        float media = 0;
        int qtdeP=0;
        int somaI=0;

        for(i=0;i<tam;i++)
        {
            if(vet[i]%2==0)
            {
                media = media + vet[i];
                qtdeP++;
            }
            else
            {
                somaI = somaI + vet[i];
            }
        }

        if(qtdeP>0)
        {
            media = media/(float)qtdeP;
            printf("Média dos pares: %.2f.\n",media);
        }
        printf("Soma dos ímpares: %d.\n",somaI);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

