/*2) Ler dois valores que representam os limites de um intervalo. Mostrar os números pares e
divisíveis por 3 desse intervalo em ordem crescente. O usuário pode informar os valores dos limites
do intervalo em ordem crescente ou decrescente. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup;
    int i;

    printf("Informe um limite: ");
    scanf("%d",&limiteInf);
    printf("Informe outro limite: ");
    scanf("%d",&limiteSup);

    if(limiteInf>limiteSup)
    {
        i = limiteSup;
        limiteSup = limiteInf;
        limiteInf = i;
    }
    for(i=limiteInf;i>=limiteSup;i--)
    {
        if(i%2==0&&i%3==0)
        {
            printf("%d\t",i);
        }
    }

    printf("\n");

    system("pause");
    return(0);
}
