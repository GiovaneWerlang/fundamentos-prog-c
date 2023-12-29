/*2) Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa
quantidade para os números compreendidos entre o valor ‘x’ informado pelo usuário e ‘x+10’,
inclusive. Validar a entrada, o usuário deverá fornecer um número positivo entre 2 e 100. Ao final
mostrar a maior quantidade de divisores. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int qtdeD, x, i, j,maiorD = 0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um número positivo entre 2 e 100: ");
            scanf("%d",&x);
        }while(x<=0);

        for(i=x;i<=x+10;i++)
        {
            qtdeD=1;
            printf("%d - 1,",i);
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    printf(" %d,",j);
                    qtdeD++;
                }

                if(qtdeD>maiorD)
                {
                    maiorD = qtdeD;
                }
            }
            printf(" %d divisores.\n",qtdeD);
        }
        printf("\nMaior quantidade de divisores é igual %d",maiorD);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
