/*7) Ler dois valores que representam os limites de um intervalo (validar as entradas),
apresentar os pares dos valores desse intervalo e a soma dos pares.
Exemplo:
10 2 4 6 8 10. Soma: 30
11 2 4 6 8 10. Soma: 30
12 2 4 6 8 10 12. Soma: 42
13 2 4 6 8 10 12. Soma: 42
14 2 4 6 8 10 12 14. Soma: 56 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup, soma, i;

    do
    {
        printf("Informe um limite: ");
        scanf("%d",&limiteInf);
    }while(limiteInf<=0);

    do
    {
        printf("Informe um limite: ");
        scanf("%d",&limiteSup);
    }while(limiteSup<=0);

    if(limiteSup<limiteInf)
    {
        soma = limiteInf;
        limiteInf = limiteSup;
        limiteSup = soma;
    }
    soma = 0;

    for(i=limiteInf;i<=limiteSup;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
            soma = soma + i;
        }
    }

    printf("Soma: %d\n",soma);

    system("pause");
    return(0);
}
