/*6) Ler dois valores que representam os limites de um intervalo (validar as entradas),
apresentar os primos desse intervalo. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int limiteInf, limiteSup;
    int i, j;
    int div;
    int qtde;

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
            printf("Limite superior: ");
            scanf("%d",&limiteSup);
        }while(limiteSup < 0);

        if(limiteSup<limiteInf)
        {
            i = limiteInf;
            limiteInf = limiteSup;
            limiteSup = i;
        }

        for(i=limiteInf;i<=limiteSup;i++)//percorrer o intervalo
        {
            qtde = 0;//inicializar para cada valor a ser testado
            for(j=2;j<=i/2;j++)//para verificar se i é primo
            {
                if(i % j == 0)
                {
                    qtde++;
                    j = i;//para sair do for
                }
            }
            if(qtde == 0)//não encontrada divisão exata
            {
                printf("%d\t",i);
            }
        }

        printf("\nExecutar novamente: ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir == 's' || repetir == 'S');
    system("pause");
    return(0);
}
