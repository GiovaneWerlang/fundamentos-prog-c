/*9) Ler n�meros inteiros informados pelo usu�rio at� ser informado um valor negativo.
Dentre os n�meros informados, exceto o valor negativo que � a condi��o de sa�da:
a) contar a quantidade de n�meros menores que 10 e os maiores que 100;
b) contar a quantidade de n�meros �mpares;
c) contar a quantidade de n�meros entre 10 e 100;
d) contar quantas vezes � informado um n�mero diferente de 10, de 20 e de 30.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=0;
    int qtdA=0;
    int qtdB=0;
    int qtdC=0;
    int qtdD=0;

    for(;num>=0;)
    {
        printf("Informe um n�mero: ");
        scanf("%d",&num);
        if(num >= 0)
        {
            if(num<10 || num>100)
            {
                qtdA = qtdA + 1;
            }
            if(num%2!=0)
            {
                qtdB = qtdB +1;
            }
            if(num>10 && num<100)
            {
                qtdC = qtdC +1;
            }
            if(num!=10||num!=20||num!=30)
            {
                qtdD = qtdD +1;
            }
        }
    }
    printf("A = %d\n",qtdA);
    printf("B = %d\n",qtdB);
    printf("C = %d\n",qtdC);
    printf("D = %d\n",qtdD);

    system("pause");
    return(0);
}
