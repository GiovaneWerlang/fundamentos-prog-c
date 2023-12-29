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
    int j;
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

            for(i=0;i<tam;)
            {
                    int aux=50;
                    ini=vetor[i];
                    if(vetor[i]+1 != vetor[i+1]||vetor[i]==vetor[i+1]&&vetor[i+1]+1!=vetor[i+2])
                    {
                        if(ini!=aux)
                            printf("[%d]",ini);
                            i++;
                            aux=ini;
                    }
                    else if(vetor[i]==vetor[i+1])
                    {
                        ini=vetor[i+1];
                        i++;
                    }
                    else
                    {
                            while(vetor[i]+1 == vetor[i+1]||vetor[i]==vetor[i+1])
                        {
                            //aux=1;
                            fim=vetor[i+1];
                            i++;
                        }
                        printf("[%d-%d]",ini, fim);
                    }

                    /*if(aux==1)
                    {
                        vetor[j]=vetor[i];
                        j++;
                    }*/
                }




        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}


