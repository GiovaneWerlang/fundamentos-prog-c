/*4) Fazer um programa que leia cinco números inteiros no intervalo entre 10 até 20, inclusive.
Validar a entrada. Para cada número lido exibir a sequência dos pares de 2 até o número gerado e a
soma desses pares. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int num, soma, par, i=1;

    do
    {
        system("cls");
        //

        do
        {
            do
            {
                printf("Informe um número inteiro entre 10 e 20: ");
                scanf("%d",&num);
            }while(num<10||num>20);
            soma = 0;
            par = 2;
            printf("%d ===>",num);

            do
            {
                printf(" %d",par);
                if(par<=num)
                {
                    soma = soma + par;
                    par = par + 2;

                }
            }while(par<=num);

            printf(" <=== Soma = %d\n",soma);


            i++;
        }while(i<=5);
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
