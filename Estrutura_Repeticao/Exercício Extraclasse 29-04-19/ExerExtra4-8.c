/*8) Ler n�meros inteiros. Prosseguir a leitura at� ser informado o valor zero que n�o deve ser
considerados nos c�lculos. Informar:
a) Quantos valores positivos formam informados;
b) Quantos valores negativos e pares foram informados;
c) A m�dia dos valores divis�veis por 3 informados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=1, positivos=0, negativos=0,cont=0,valoresD3=0;
    float media;

    do{
        if(num!=0)
        {
            printf("Informe um n�mero: ");
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
    printf("N�meros negativos %d\nN�meros positivos %d\nM�dia dos divis�veis por 3: %.2f\n",negativos,positivos,media);

    system("pause");
    return(0);
}
