/*12) Fa�a um programa que imprima os 'n' (indicado pelo usu�rio) primeiros n�meros
�mpares,divisiveis por 5 e n�o por 7. Apresentar cinco valores por linha.
Por exemplo, se o usu�rio informar 10,
mostrar:
0    2    4    6     8 //primeira linha com cinco n�meros
10 12  14  16  18 // segunda linha com cinco n�meros. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int aux=1;
    int qtdeJaMostrados=0;
    int qtdeMostrar;

    do
    {
           printf("Quantos valores mostrar?: ");
           scanf("%d",&qtdeMostrar);
            if(qtdeMostrar<=0)
            {
                printf("O valor deve ser positivo. Informe novamente\n");
            }
    }while(qtdeMostrar <=0);

    do
    {
        if(aux%2!=0&&aux%5==0&&aux%7!=0)
        {
            printf("%d\t",aux);
            qtdeJaMostrados++;
            if(qtdeJaMostrados %5==0)
            {
                printf("\n");
            }
        }
        aux++;
    }while(qtdeJaMostrados < qtdeMostrar);
    system("pause");
    return(0);
}
