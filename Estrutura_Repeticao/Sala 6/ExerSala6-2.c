/*2) Ler dois números positivos que representam os limites inferior e superior de um intervalo.
Validar a entrada para que sejam informados números positivos. É mais adequado validá-los separadamente.
Fazer a média dos múltiplos de 3 e de 5 desse intervalo.
Verificar para que no cálculo da média não seja feita divisão por zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup;
    int soma=0, cont=0;
    int i;
    float media;

    do
    {
        printf("Informe um número positivo: ");
        scanf("%d",&limiteInf);
    }while(limiteInf < 0);

    do
    {
        printf("Informe um número positivo: ");
        scanf("%d",&limiteSup);
    }while(limiteSup < 0);

    if(limiteSup<limiteInf)
    {
        i = limiteInf;
        limiteInf = limiteSup;
        limiteSup = i;
    }

    for(i=limiteInf;i<=limiteSup;i++)
    {
        if(i%3==0&&i%5==0)
        {
            printf("%d\t",i);
            soma = soma + i;
            cont++;
        }
    }

    if(cont>0)
    {
        media = soma/(float)cont;
        printf("\nMedia: %.2f\n",media);
    }

    system("pause");
    return(0);
}
