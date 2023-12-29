#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam;
    int limite;
    int i;
    int ini;
    int fim;

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
                printf("Informe o valor máximo de um elemento do vetor: ");
                scanf("%d",&limite);
            }while(limite<=0);
            gerarVetorInt(vetor,tam,limite);
            ordenaVetor(vetor,tam);
            mostrarVetorInt(vetor,tam);
            printf("\n\n");

            ini = vetor[0];

            for(i=0;i<tam;i++)
            {
                //printf("ini %d\n",ini);
                if(ini==vetor[i+1]-1&&ini!=fim)
                {
                    fim=vetor[i+1];
                    //printf("fim %d\n",fim);
                    if(fim!=vetor[i+2]-1&&fim!=vetor[i+2])
                    {
                        printf("[%d-%d],",ini,fim);
                        ini=vetor[i+2];
                        i++;
                        //i=i++;
                    }
                   // else
                   // {
                   //     fim=vetor[i+2];
                   // }
                }
                else if(ini==vetor[i+1])
                {
                    //ini=vetor[i+1];
                    //printf("nada\n");
                }
                else if(ini!=vetor[i]-1)
                {
                    printf("[%d],",ini);
                    ini=vetor[i+1];
                    //i=i+1;
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

