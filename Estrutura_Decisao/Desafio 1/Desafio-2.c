/*2) Faça um Programa que leia um número inteiro menor que 1000 e imprima a
quantidade de centenas, dezenas e unidades que o mesmo possui.
Exemplo: 326 = 3 centenas, 2 dezenas e 6 unidades. 120 = 1 centena e 2 dezenas.
Observar os termos no plural a colocação do "e", da vírgula entre outros. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    float numF;

    printf("Informe um número menor que 1000: ");
    scanf("%d",&num);

    numF = num;
    numF = ((numF/10)-(num/10))*10;

    printf("%d  %f\n",num,numF);
    numF = (num/10);
    printf("%f\n",numF);

    numF = (num -(num/10))/100;
    printf("%f\n",numF);

    if(num<=0||num>999)
    {
        printf("Número inválido\n");
    }
    else if(num>0 &&num<=999)
    {
        if(num>=900)
        {
            printf("Nove centenas\n");
            if(num/10)
        }
        else if(num>=800&&num<900)
        {
            printf("Oito centenas\n");
        }
        else if(num>=700&&num<800)
        {
            printf("Sete centenas\n");
        }
        else if(num>=600&&num<700)
        {
            printf("Seis centenas\n");
        }
        else if(num>=500&&num<600)
        {
            printf("Cinco centenas\n");
        }
        else if(num>=400&&num<500)
        {
            printf("Quatro centenas\n");
        }
        else if(num>=300&&num<400)
        {
            printf("Três centenas\n");
        }
        else if(num>=200&&num<300)
        {
            printf("Duas centenas\n");
        }
        else if(num>=100&&num<200)
        {
            printf("Uma centenas\n");
        }
        else if(num>=1&&num<100)
        {
            printf("Nenhuma centena\n");
        }
    }

    system("pause");
    return(0);
}
