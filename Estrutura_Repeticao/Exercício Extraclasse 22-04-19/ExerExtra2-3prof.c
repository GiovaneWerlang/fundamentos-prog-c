/*3) Ler cinco n�meros. Para cada n�mero lido, informar a quantidade de algarismos pares que ele
possui. Exemplo: o valor 123456, possui 3 algarismos pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, qt,digito, num,numS;

    for(i=0;i<5;i++)
    {
        qt=0;
        printf("Informe o n�mero: ");
        scanf("%d",&num);
        numS=num;
        while(num>0)
        {
            digito=num%10;
            if(digito%2==0)
            {
                qt++;
            }
            num = num/10;
        }
        printf("Quantidade pares em %d e %d\n",numS,qt);
    }


    system("pause");
    return(0);
}
