/*10) O que faz o algoritmo a seguir:
    declare vet[80], i como inteiro
    repetir i = 0, até i < 80, passo 1
        leia vet[i]
    fim-repetir
    menor ← vet[0]
    posicaomenor ← 0

    repetir i = 0, até i < 80, passo 1
        se ( vet[i] < menor ) then
            menor ← vet(i)
            posicaomenor ← i
        fim-se
    fim-repetir
    escreva ‘menor = ’, menor, ‘na posicao =’, posicaomenor

Implemente uma solução na linguagem C para esse algoritmo.
Deve ser utilizadasfunções para gerar e mostrar o  vetor e fazer a funcionalidade do exercicio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int vet[80];
    int i;

    do
    {
        system("cls");
        //
        /*for(i=0;i<80;i++)
        {
            printf("Informe o valor de vet[%d]",i);
            scanf("%d",&vet[i]);
        }*/
        gerarVetorInt(vet,80,100);
        int menor = vet[0];
        int posicaomenor = 0;

        for(i=0;i<80;i++)
        {
            if(vet[i]<menor)
            {
                menor = vet[i];
                posicaomenor=i;
            }
        }
        printf("Menor = %d na posicao = %d",menor,posicaomenor);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
