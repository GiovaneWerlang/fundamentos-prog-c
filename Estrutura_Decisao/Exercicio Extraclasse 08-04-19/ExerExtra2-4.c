/*4) Elabore um algoritmo que leia um número inteiro menor que 1000 e imprima a
quantidade de centenas, dezenas e unidades que o mesmo possui. Observar os termos no
plural a colocação do "e", da vírgula entre outros. Exemplo: 326 = 3 centenas, 2 dezenas
e 6 unidades. 120 = 1 centena e 2 dezenas.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, cent, dez, uni;

    printf("Informe um número inteiro menor que 1000: ");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Número inserido inválido.\n");
    }
    else if(num>=1000)
    {
        printf("Número inserido inválido.\n");
    }
    else if(num>=100)
    {
        cent = num/100;
        dez =((num%100)-(num%10))/10;
        uni = num%10;
        if(dez!=0 && uni!=0)
        {
            printf("%d = %d centenas,%d dezenas e %d unidades.\n",num,cent,dez,uni);
        }
        else if(dez==0 && uni!=0)
        {
            printf("%d = %d centenas e %d unidades.\n",num,cent,uni);
        }
        else //(dez!=0 && uni==0)
        {
            printf("%d = %d centenas e %d dezenas.\n",num,cent,dez);
        }

    }
    else
    {
        dez=((num%100)-(num%10))/10;
        uni=num%10;
        if(dez!=0 && uni!=0)
        {
            printf("%d = %d dezenas e %d unidades.\n",num,dez,uni);
        }
        else if(dez!=0 && uni==0)
        {
            printf("%d = %d dezenas.\n",num,dez);
        }
        else
        {
            printf("%d = %d unidades.\n",num,uni);
        }

    }

    system("pause");
    return(0);
}
