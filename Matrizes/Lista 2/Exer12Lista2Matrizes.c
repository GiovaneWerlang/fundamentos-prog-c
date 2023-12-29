/*1) Gerar uma matriz de 5x5 com números aleatórios entre 10 e 100, mostrar essa matriz.
Somar adiagonal principal e a secundária. Mostrar a matriz e essas somas.
2) Gerar uma matriz 5 X 5 com números randômicos, no intervalo de 1 a 100.
Em seguida criar dois vetores que contenham, respectivamente, as somas das linhas e
das colunas da matriz. Mostrar os vetores criados.*/
#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

int main(void)
{
    int i;
    int j;
    int matriz[5][5];
    int somaDP=0;//diagonal principal
    int somaDS=0;//diagonal secundária
    int somaLinhas[5];
    int somaColunas[5];

    for(i=0;i<5;i++)
    {
        somaColunas[i] = 0;
        somaLinhas[i] = 0;
    }

    for(i=0;i<5;i++)//linha
    {
        for(j=0;j<5;j++)//coluna
        {
            matriz[i][j]= rand() % (100 - 10 + 1) + 10;
            printf("%d\t",matriz[i][j]);
            if(i==j)//diagonal principal
            {
                somaDP = somaDP + matriz[i][j];
            }
            if(i+j==4) //0 0 até 4 4. 4 é o ultimo indice
            {
                somaDS = somaDS + matriz[i][j];
            }
            somaLinhas[i] = somaLinhas[i] + matriz[i][j];
            somaColunas[j] = somaColunas[j] + matriz[i][j];
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Soma da diagonal principal: %d\n",somaDP);
    printf("Soma da diagonal secundaria: %d\n",somaDS);
    printf("\nSoma das linhas: \n");
    mostrarVetorInt(somaLinhas,5);
    printf("\nSoma das colunas: \n");
    mostrarVetorInt(somaColunas,5);

}
