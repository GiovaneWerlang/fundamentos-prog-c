/*9) Ler dois valores que representam os limites de um intervalo. Apresentar os valores
separados por tabulação. Fazer a média dos valores que são divisíveis por 11 e por 7,desse intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup;
    int cont, soma;
    int i;
    float media;
    cont = 0;
    soma = 0;
    media = 0;

    printf("Informe um limite: ");
    scanf("%d",&limiteInf);
    printf("Informe outro limite: ");
    scanf("%d",&limiteSup);
    if(limiteSup<limiteInf)
    {
        i = limiteInf;
        limiteInf = limiteSup;
        limiteSup = i;
    }
    for(i=limiteInf;i<=limiteSup;i++)
    {
        if(i%11==0)
        {
            printf("%d\t",i);
            cont = cont + 1;
            soma = soma + i;
        }
        if(i%7==0)
        {
            printf("%d\t",i);
            cont = cont + 1;
            soma = soma + i;
        }
    }
    media = (float)soma / (float)cont;
    printf("\nA media e: %.2f\n",media);

    system("pause");
    return(0);
}
