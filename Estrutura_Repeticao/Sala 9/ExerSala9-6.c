/*6) Ler dois valores que representam os limites do intervalo. Apresentar os valores pares e
divisíveis por cinco desse intervalo em ordem decrescente. O usuário pode informar os
valores em ordem crescente e decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int limiteInf, limiteSup, pDiv,i,linha=0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um limite: ");
            scanf("%d",&limiteInf);
        }while(limiteInf<0);

        do
        {
            printf("Informe outro limite: ");
            scanf("%d",&limiteSup);
        }while(limiteSup<0);

        if(limiteSup<limiteInf)
        {
            i = limiteInf;
            limiteInf = limiteSup;
            limiteSup = i;
        }

        for(i=limiteSup;i>=limiteInf;i--)
        {
            if(i%2==0&&i%5==0)
            {
                printf("%d\t",i);
                linha++;
                if(linha%5==0)
                {
                    printf("\n");
                }
            }
        }
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
