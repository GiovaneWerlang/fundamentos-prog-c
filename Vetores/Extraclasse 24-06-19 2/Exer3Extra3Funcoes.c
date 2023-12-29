#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam=10;
    int vetor[tam];
    int num;

    do
    {
        system("cls");
        //
            gerarVetorInt(vetor,tam,50);

            do
            {
                printf("Informe o número que deseja verificar se está no vetor: ");
                scanf("%d",&num);
            }while(num<0||num>tam-1);

            verificaElementoVetor(vetor,tam,num);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

