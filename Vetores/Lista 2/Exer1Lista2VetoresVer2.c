#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    int i;
    int vetor[15];
    int qtdePares=0;
    int qtdeImpares=0;
    //void gerarVetorInt(int vetor[],int tam, int limite)
    gerarVetorInt(vetor,15,30);
    //void mostrarVetoresInt(int vetor[],int tam)
    mostrarVetoresInt(vetor,15);
    for(i=0;i<15;i++)//para saber tamanho exato do vetor de pares e impares
    {
        if(vetor[i] % 2==0)
        {
            qtdePares++;
        }
        else
        {
            qtdeImpares++;
        }
    }

    int vetPares[qtdePares];
    int vetImpares[qtdeImpares];
    qtdeImpares=0;
    qtdePares=0;
    for(i=0;i<15;i++)
    {
        if(vetor[i]%2==0)
        {
            vetPares[qtdePares]= vetor[i];
            qtdePares++;
        }
        else
        {
            vetImpares[qtdeImpares]=vetor[i];
            qtdeImpares++;
        }
    }
    //void mostrarVetoresInt(int vetor[],int tam)
    printf("\n\nPares\n");
    mostrarVetoresInt(vetPares,qtdePares);
    printf("\n\nImpares\n");
    mostrarVetoresInt(vetImpares,qtdeImpares);



}
