#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int i;
    int indicePar=0;
    int indiceImpar=0;
    int vet[15];
    int pares[15];
    int impares[15];

    //void gerarVetorInt(int vetor[],int tam, int limite)
    gerarVetorInt(vet,20,90);
    //void mostrarVetoresINt(int vetor[],int tam)
    mostrarVetoresInt(vet,20);

    for(i=0;i<15;i++)
    {
        if(vet[i]%2==0)
        {
            pares[indicePar] = vet[i];//pode ser ++ dentro do pares
            indicePar++;
        }
        else
        {
            impares[indiceImpar] = vet[i];
            indiceImpar++;
        }
    }
    //void mostrarVetoresINt(int vetor[],int tam)
    printf("\nValores pares\n");
    mostrarVetoresInt(pares,indicePar);
    printf("\nValores ímpares\n");
    mostrarVetoresInt(impares,indiceImpar);


    /*do
    {
        system("cls");
        //
            printf("Vetores.\n");
            printf(" - ");
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');*/

    system("pause");
    return(0);
}
