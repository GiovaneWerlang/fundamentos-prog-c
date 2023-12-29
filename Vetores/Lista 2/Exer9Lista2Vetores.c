/*9) O que faz o algoritmo a seguir:
declare a[50], i, soma como inteiro
declare media como real
soma ← 0

repetir i = 0, até i< 50, passo 1
    leia a[i]
fim-repetir

repetir i = 0, até i< 50, passo 1
    soma ← soma + a[i]
fim-repetir

repetir i = 0, até i < 50, passo 1
    escreva a[i]
fim-repetir

media ← soma / 50
escreva media

Implemente uma solução na linguagem C para esse algoritmo.
Devem ser utilizadasfunções para gerar o vetor, somar e mostrar os elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int a[50];
    int i;
    int soma = 0;
    float media;

    do
    {
        system("cls");
        //
            for(i=0;i<50;i++)
            {
                printf("Informe o valor de a[%d]",i);
                scanf("%d",&a[i]);
            }

            for(i=0;i<50;i++)
            {
                soma = soma + a[i];
            }

            for(i=0;i<50;i++)
            {
                printf("\n%d",a[i] );
            }
            media = soma/50.0;
            printf("\nMedia %.2f",media);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
