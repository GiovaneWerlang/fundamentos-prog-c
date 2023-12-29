/*5) Ler dois números que representam os limites de um intervalo, mostrar os pares desse
intervalo em ordem decrescente e em colunas. Os valores para os limites devem ser
positivos. Validar a entrada, ou seja, prosseguir a leitura para que o usuário informe um
valor positivo para ambos. O usuário informa a quantidade de colunas. É indispensável
testar os valores informados para os limites para identificar o maior e o menor deles. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup=0, contP;
    int i;

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
        contP = limiteInf;
        limiteInf = limiteSup;
        limiteSup = contP;
    }

    contP = 0;
    for(i=limiteSup;i>=limiteInf;i--)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
            contP++;
            if(contP%5==0)
            {
                printf("\n");
            }
        }
    }


    system("pause");
    return(0);
}
