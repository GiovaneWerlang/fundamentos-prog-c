/*13) Criar um algoritmo que leia os limites inferior e superior de um intervalo e
imprima todos os números pares no intervalo aberto e seu somatório.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup, somaPares=0,cont=0;
    int i;

    printf("Informe um limite: ");
    scanf("%d",&limiteInf);
    printf("Informe outro limite: ");
    scanf("%d",&limiteSup);

    if(limiteSup<limiteInf)
    {
        i=limiteSup;
        limiteSup = limiteInf;
        limiteInf = i;
    }

    for(i=limiteInf;i<=limiteSup;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
            somaPares = somaPares + i;
            cont++;
            if(cont%5==0)
            {
                printf("\n");
            }
        }
    }
    printf("Somatório: %d\n",somaPares);
    system("pause");
    return(0);
}
