/*11) O que faz o algoritmo a seguir:
    declare A[30], B[30], i, k como inteiro
    repetir i = 0, até i < 30, passo 1
        leia A[i]
        escrevaA[i]
    fim-repetir

    k ← 0
    repetir i = 0, i < 30, passo 1
        se ( A[i] # 0 ) then
        b[k] ← a[i]
        k ← k + 1

        fim-se
    fim-repetir
    repetir i = 0, até i < k, passo 1
        escreva B[i]
    fim-repetir
Implemente uma solução na linguagem C para esse algoritmo.
Devem ser utilizadasfunções para gerar e mostrar vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int A[30];
    int B[30];
    int i;
    int k;

    do
    {
        system("cls");
        //
            /*for(i=0;i<30;i++)
            {
                printf("Informe o valor de A[%d]",i);
                scanf("%d",A[i]);
                printf("%d",A[i]);
            }*/
            gerarVetorInt(A,30,100);
            k=0;
            for(i=0;i<30;i++)
            {
                if(A[i]!=0)
                {
                    B[k]=A[i];
                    k = k + 1;
                }
            }
            for(i=0;i<k;i++)
            {
                printf("\nB[%d] = %d",i,B[i]);
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');

    system("pause");
    return(0);
}
