/*3) Ler dois valores que representam os limites de um intervalo (o usuário pode informar os
valores em ordem crescente ou decrescente). Apresentar os valores da seguinte forma:
Número      Raiz    Parte inteira   Parte decimal
9           3       3               0
10          3,162   3               0,16
11          3,316   3               0,31*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int limiteInf, limiteSup;
    int i, raizI;
    float raiz, raizD;

    printf("Informe um limite: ");
    scanf("%d",&limiteInf);
    printf("Informe outro limite: ");
    scanf("%d",&limiteSup);

    if(limiteSup<limiteInf)
    {
        i=limiteInf;
        limiteInf = limiteSup;
        limiteSup = i;
    }
    printf("Número\tRaiz\tParte Inteira\tParte Decimal\t\n");
    for(i=limiteInf;i<=limiteSup;i++)
    {
        if(i!=0)
        {
            raiz = sqrt(i);
            raizI = raiz;
            raizD = raiz - raizI;
            printf("%d\t%.3f\t%d\t\t%.2f\n",i,raiz,raizI,raizD);
        }

    }



    system("pause");
    return(0);
}
