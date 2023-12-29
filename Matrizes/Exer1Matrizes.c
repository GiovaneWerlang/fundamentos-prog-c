/*4) Ler duas notas de 5 alunos. Armazená-las em uma matriz.
Encontrar a maior e a menor entre as notas armazenadas.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    char repetir;
    float notas[5][2];
    int i;
    int j;

    do
    {
        system("cls");
        //
            for(i=0;i<5;i++)
            {
                for(j=0;j<2;j++)
                {
                    printf("Informe a nota [%d][%d] do aluno: ",i,j);
                    scanf("%f",&notas[i][j]);
                }
            }
            float menor;
            float maior;
            maior = menor = notas[0][0];

            for(i=0;i<5;i++)
            {
                for(j=0;j<2;j++)
                {
                    printf("%4.2f\t",notas[i][j]);
                    if(notas[i][j] > maior)
                    {
                        maior = notas[i][j];
                    }
                    else if(notas[i][j]<menor)
                    {
                        menor = notas[i][j];
                    }
                    if(j>0)
                    {
                        printf("Media: %4.2f\t",(notas[i][0]+notas[i][1]) /2.0);
                    }
                }
                printf("\n");
            }
            printf("\n");
            printf("Maior: %.2f\n",maior);
            printf("Menor: %.2f\n",menor);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}

