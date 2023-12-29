/*1) Uma empresa deseja calcular a deprecia��o de seus bens. Para tanto, desenvolver um programa
que obtenha a taxa de deprecia��o anual para os bens, o valor do bem a ser depreciado e o per�odo
em anos.
Valor depreciado = valor do bem * (taxa de deprecia��o / 100);
Valor do bem depreciado = valor do bem � valor depreciado;
Mostrar os resultados com sugere a figura a seguir*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int taxaDepreciacao, periodo;
    float valorD, valorBem, valorBemD,acumuloD;
    int i;

    printf("Informe a taxa de deprecia��o anual: ");
    scanf("%d",&taxaDepreciacao);
    printf("Informe o valor do bem: ");
    scanf("%f",&valorBem);
    printf("Informe o per�odo em anos: ");
    scanf("%d",&periodo);

    printf("\n\nAno\tValor do Bem\tDepreciacao\tValor Depreciado\n==================================================================\n");

    for(i=0;i<=periodo;i++)
    {
        valorD = valorBem * ((float)taxaDepreciacao /100);
        valorBemD = valorBem - valorD;
        valorBem = valorBemD;
        acumuloD = acumuloD + valorD;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n",i,valorBem,valorD, valorBemD);
    }
    printf("==================================================================\n");
    printf("Deprecia��o acumulada: R$%.2f\n",acumuloD);



    system("pause");
    return(0);
}
