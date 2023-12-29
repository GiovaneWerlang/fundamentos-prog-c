/*10) Escreva um algoritmo que gere a série de Fibonacci até o termo 'n' que é informado
pelo usuário. A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34,55, ... , etc.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int atual=1, anterior=1, proximo;
    int termos, i;

    printf("Quantos termos da série mostrar?: ");
    scanf("%d",&termos);

    if(termos==1)
    {
        printf("1");
    }
    else if(termos>1)
    {

        printf("1\t1\t");
        for(i=3;i<=termos;i++)
        {
            proximo = atual + anterior;
            anterior = atual;
            atual = proximo;
            printf("%d\t",atual);
        }

    }
    else
    {
        printf("Informado zero ou valor negativo\n");
    }

    printf("\n");
    system("pause");
    return(0);
}
