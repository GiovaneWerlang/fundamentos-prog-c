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
    char repetir;
    int limiteInf, limiteSup;
    int i, j;
    int soma;


    do
    {
        do
        {
            printf("Informe o limite inferior positivo: ");
            scanf("%d",&limiteInf);
        }while(limiteInf < 0);

        do
        {
            printf("Informe o limite superior positivo: ");
            scanf("%d",&limiteSup);
        }while(limiteSup < 0);

        if(limiteSup<limiteInf)
        {
             i = limiteInf;
             limiteInf = limiteSup;
             limiteSup = i;
        }
        for(i=limiteInf;i<=limiteSup;i++) // percorre o intervalo: 10 e 14
        {
            soma = 0;
            printf("%d => ",i);
            for(j=2;j <= i; j=j+2)
            {
                printf("%d   ",j);
                soma = soma + j;
            }
            printf(" soma: %d\n",soma);
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S' || repetir=='s');

    system("pause");
    return(0);
}

