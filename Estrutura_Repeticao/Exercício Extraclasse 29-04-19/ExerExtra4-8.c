/*8) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser
considerados nos cálculos. Informar:
a) Quantos valores positivos formam informados;
b) Quantos valores negativos e pares foram informados;
c) A média dos valores divisíveis por 3 informados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=1, positivos=0, negativos=0,cont=0,valoresD3=0;
    float media;

    do{
        if(num!=0)
        {
            printf("Informe um número: ");
            scanf("%d",&num);
            if(num>0)
            {
                positivos++;
            }
            if(num<0)
            {
                negativos++;
            }
            if(num%3==0)
            {
                valoresD3 = valoresD3 + num;
                cont++;
            }
        }

    }while(num!=0);

    media = valoresD3 / (float)cont;
    printf("Números negativos %d\nNúmeros positivos %d\nMédia dos divisíveis por 3: %.2f\n",negativos,positivos,media);

    system("pause");
    return(0);
}
