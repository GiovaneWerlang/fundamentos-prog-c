/*2) Ler dois n�meros positivos que representam os limites inferior e superior de um intervalo.
Validar a entrada para que sejam informados n�meros positivos. � mais adequado valid�-los separadamente.
Fazer a m�dia dos m�ltiplos de 3 e de 5 desse intervalo.
Verificar para que no c�lculo da m�dia n�o seja feita divis�o por zero.*/

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
        printf("Informe um n�mero positivo: ");
        scanf("%d",&limiteInf);
    }while(limiteInf < 0);

    do
    {
        printf("Informe um n�mero positivo: ");
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
