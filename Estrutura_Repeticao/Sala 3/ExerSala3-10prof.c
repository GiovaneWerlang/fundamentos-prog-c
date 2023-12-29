/*10) Escreva um algoritmo que gere a s�rie de Fibonacci at� o termo 'n' que � informado
pelo usu�rio. A s�rie de Fibonacci � formada pela sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34,55, ... , etc.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int atual=1, anterior=1, proximo;
    int termos, i;

    printf("Quantos termos da s�rie mostrar?: ");
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
