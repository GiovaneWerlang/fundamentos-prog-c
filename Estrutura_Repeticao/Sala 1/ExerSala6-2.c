/*7) Ler dois números que representam os limites de um intervalo e ler o incremento.
Mostrar os números desse intervalo de acordo com o incremento indicado e em ordem crescente.
O usuário pode informar os valores que representam os limites do intervalo em ordem crescente ou decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup;
    int inc;
    int i;

    printf("Informe um dos limites: ");
    scanf("%d",&limiteInf);
    printf("Informe o outro limite: ");
    scanf("%d",&limiteSup);
    printf("Informe o incremento: ");
    scanf("%d",&inc);

    if(limiteInf > limiteSup)
    {
        i = limiteInf;
        limiteInf = limiteSup;
        limiteSup = i;
    }

    for(i=limiteInf;i<=limiteSup;i=i+inc)
    {
        printf("%d\t",i);
    }
    system("pause");
    return(0);
}
