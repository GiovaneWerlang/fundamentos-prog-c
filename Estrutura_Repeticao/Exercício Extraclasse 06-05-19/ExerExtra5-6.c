/*6) Ler dois valores que representam os limites de um intervalo (validar as entradas),
apresentar os primos desse intervalo. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup=0, i, p, qtde=0;

    do
    {
        printf("Informe um limite: ");
        scanf("%d",&limiteInf);
    }while(limiteInf<=0);

     do
    {
        printf("Informe outro limite: ");
        scanf("%d",&limiteSup);
    }while(limiteSup<=0);


    if(limiteSup<limiteInf)
    {
        i=limiteInf;
        limiteInf = limiteSup;
        limiteSup = i;
    }

    for(i=limiteInf;i<=limiteSup;i++)
    {
        qtde=0;

        for(p=2;p<=i/2;p++)
        {
            if(i % p == 0)
            {
                qtde++;
                p=i;
            }
        }
        if(qtde == 0)
        {
            printf("%d é primo\n",i);
        }
    }
    system("pause");
    return(0);
}
