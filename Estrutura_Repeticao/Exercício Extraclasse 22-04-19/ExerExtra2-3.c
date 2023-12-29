/*3) Ler cinco números. Para cada número lido, informar a quantidade de algarismos pares que ele
possui. Exemplo: o valor 123456, possui 3 algarismos pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[5] ,calc, contadorPares=0;
    float divisao;
    int i;

    for(i=0;i<5;i++)
    {
    printf("Informe um número: ");
    scanf("%d",&num[i]);
        if(num[i]>=100000)
        {
            contadorPares =0;
            divisao = num[i] / (float)100000;
            calc = divisao;
            if(calc%2==0)
                {
                    contadorPares =contadorPares + 1;
                }
               divisao = (num[i]%100000)/10000;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%10000)/1000;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%1000)/100;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%100)/10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num[i]%10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                printf("O valor %d tem %d números pares.\n",num[i],contadorPares);
        }
        if(num[i]>=10000&&num[i]<100000)
        {
            contadorPares =0;
            divisao = (num[i]/10000);
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%10000)/1000;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%1000)/100;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%100)/10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num[i]%10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                printf("O valor %d tem %d números pares.\n",num[i],contadorPares);
        }
        if(num[i]>=1000&num[i]<10000)
        {
            contadorPares =0;
                divisao = (num[i]/1000);
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%1000)/100;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%100)/10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num[i]%10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                printf("O valor %d tem %d números pares.\n",num[i],contadorPares);
        }
        if(num[i]>=100&&num[i]<1000)
        {
            contadorPares = 0;

                divisao = (num[i]%1000)/100;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num[i]%100)/10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num[i]%10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }

                printf("O valor %d tem %d números pares.\n",num[i],contadorPares);
        }
        if(num[i]>=10&&num[i]<100)
        {
            contadorPares =0;
            divisao = (num[i]%100)/10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num[i]%10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }

                printf("O valor %d tem %d números pares.\n",num[i],contadorPares);
        }
        if(num[i]>0&&num[i]<10)
        {
            contadorPares =0;
            calc = num[i];
            if(calc%2==0)
            {
                contadorPares = contadorPares +1;
            }
            printf("O valor %d tem %d números pares.\n",num[i],contadorPares);

        }





        }




    system("pause");
    return(0);
}
