#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam;
    int limite;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d",&tam);
        }while(tam<=0);
        int vetor[tam];
        do
        {
            printf("Informe o valor maximo para o vetor: ");
            scanf("%d",&limite);
        }while(limite<=0);

        gerarVetorIntRand(vetor,tam, limite);
        mostrarVetorInt(vetor,tam);
        printf("\n\n");
        ordenaVetor(vetor,tam);
        mostrarVetorInt(vetor,tam);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

