#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,calc, contadorPares=0;
    float divisao;
    int i;

    for(i=0;i<=5;i++)
    {
    printf("Informe um número: ");
    scanf("%d",&num);
        if(num>=100000)
        {
            contadorPares =0;
            divisao = num / (float)100000;
            calc = divisao;
            if(calc%2==0)
                {
                    contadorPares =contadorPares + 1;
                }
               divisao = (num%100000)/10000;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%10000)/1000;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%1000)/100;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%100)/10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num%10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                printf("O valor %d tem %d números pares.\n",num,contadorPares);
        }
        if(num>=10000&&num<100000)
        {
            contadorPares =0;
            divisao = (num/10000);
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%10000)/1000;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%1000)/100;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%100)/10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num%10;
                calc = divisao;
                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                printf("O valor %d tem %d números pares.\n",num,contadorPares);
        }
        if(num>=1000&num<10000)
        {
            contadorPares =0;
                divisao = (num/1000);
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%1000)/100;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%100)/10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num%10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                printf("O valor %d tem %d números pares.\n",num,contadorPares);
        }
        if(num>=100&&num<1000)
        {
            contadorPares = 0;

                divisao = (num%1000)/100;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = (num%100)/10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num%10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }

                printf("O valor %d tem %d números pares.\n",num,contadorPares);
        }
        if(num>=10&&num<100)
        {
            contadorPares =0;
            divisao = (num%100)/10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }
                divisao = num%10;
                calc = divisao;

                if(calc%2==0)
                {
                    contadorPares = contadorPares +1;
                }

                printf("O valor %d tem %d números pares.\n",num,contadorPares);
        }
        if(num>0&&num<10)
        {
            contadorPares =0;
            calc = num;
            if(num%2==0)
            {
                contadorPares = contadorPares +1;
            }
            printf("O valor %d tem %d números pares.\n",num,contadorPares);
        }





        }




    system("pause");
    return(0);
}
