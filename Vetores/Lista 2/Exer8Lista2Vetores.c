/*8) Gerar aleatoriamente um vetor com 100 elementos que conterá somente valores 0 ou 1.
Mostrar esse vetor. Em seguida contar quantos 0s sucessivos o vetor contém, armazenar essa
quantidade em outro vetor e mostrá-lo. Qual seria o tamanho mínimo e máximo desse vetor
que armazena as quantidades? Criá-lo para  a tamanho máximo possível.
Exemplo Vetor gerado: 00010011111000
VetorQuatidades:323 (os três primeiros zeros,nos dois zeros subsequentes e os três zeros no
final)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int vetorA[100];
    int vetorB[100];
    int i;
    int ant=1;
    int cont=0;
    int j=0;


    do
    {
        system("cls");
        //
            gerarVetorInt(vetorA,100,1);
            printf("\n\nVetor \n");
            mostrarVetoresInt(vetorA,100);
            for(i=0;i<100;i++)
            {
                if(ant==0&&ant==vetorA[i]||ant==1&&vetorA[i]==0)
                {
                    cont++;
                }
                else if(vetorA[i]==1&&cont>0)
                {
                    vetorB[j] = cont;
                    j++;
                    cont=0;
                }
                ant = vetorA[i];
            }
            printf("\n");
            mostrarVetoresInt(vetorB,j);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
