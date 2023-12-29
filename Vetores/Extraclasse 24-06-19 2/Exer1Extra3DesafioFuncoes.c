#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam;
    int limite;
    int num;
    int retorno;

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
            printf("Informe o limite dos valores: ");
            scanf("%d",&limite);
        }while(limite<=0);

        gerarVetorInt(vetor,tam,limite);
        mostrarVetorInt(vetor, tam);

        do
        {
            printf("\nInforme o n�mero para checar se est� no vetor: ");
            scanf("%d",&num);
        }while(num<0);

        retorno = veriContidoVetor(vetor,tam,num);
        printf("\n%d", retorno);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

