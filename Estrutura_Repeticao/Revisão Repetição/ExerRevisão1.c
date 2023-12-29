/*5) Apresentar os primos entre dois limites informados pelo usuário.
Apresentar os primos de 1 ou 2 até o número do intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int limiteInf, limiteSup;
    int qtdeDiv, i, j, div;

    do
    {
        system("cls");

        do
        {
            printf("Limite inferior: ");
            scanf("%d",&limiteInf);
        }while(limiteInf < 0);

        do
        {
            printf("Limite superior maior que %d:",limiteInf);
            scanf("%d",&limiteSup);
        }while(limiteSup < limiteInf);

        for(i=limiteInf;i<=limiteSup;i++)
        {
            printf("%d = ",i);
            for(j=1;j<=i;j++)//vai de 1 até i e vamos testar se cada um desses valores é primo
            {
                qtdeDiv = 0;
                for(div=2;div <=j/2;div++)//dividir de 2 até a metade
                {
                    if(j % div == 0)//se encontrada divisão exata
                    {
                        qtdeDiv++;
                        div = j;//sair do for div
                    }

                }
                if(qtdeDiv == 0)//se não encontradas divisões exatas entre 2 e a metade do número(j) é primo
                {
                    printf("%4d",j);
                }
            }
            printf("\n");
        }
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir == 's'|| repetir == 'S');

    system("pause");
    return(0);
}
