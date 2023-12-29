/*7) Gerar dois vetores de inteiros com 10 elementos, ambos com valores até 10. Um dos
vetores representa a base e outro o expoente. Calcular a potência por meio de uma
função. Usar funções para gerar vetor, mostrar vetor, calcular a potência. Mostrar da
seguinte forma:
3 ^ 3 = 27
2 ^ 0 = 1
3 ^ 1 = 3*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam = 10;
    int vetA[tam];
    int vetB[tam];
    int limite = 10;
    int i;

    do
    {
        system("cls");
        //
            gerarVetorInt(vetA,tam,limite);
            gerarVetorInt(vetB,tam,limite);

            for(i=0;i<tam;i++)
            {
                potenciaVetor(vetA,i,vetB,i);
                printf("\n");
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

