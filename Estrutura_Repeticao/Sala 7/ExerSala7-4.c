/*4) Escreva um programa que leia o valor de uma aplica��o, o percentual de rendimento
mensal obtido por esta aplica��o e o per�odo do investimento; e retorne o valor da
aplica��o ao final do per�odo de investimento. Obs.: a cada 12 meses o percentual de
rendimento deve ser aumentado em 0,25%.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int i, periodo;
    float valor, valorF,percentual;
    do
    {
        system("cls");

        do
        {
            printf("Informe o valor da aplica��o: ");
            scanf("%f",&valor);
        }while(valor<=0);

        do
        {
            printf("Informe o percentual de rendimento mensal: ");
            scanf("%f",&percentual);
        }while(percentual<=0);

        do
        {
            printf("Informe o per�odo de investimento: ");
            scanf("%d",&periodo);
        }while(periodo<=0);

        valorF = valor;

        for(i=1;i<=periodo;i++)
        {
            valorF = valorF + (valorF*(percentual/100.0));
            if(i%12==0)
            {
                percentual = percentual + 0.25;
            }
        }
        printf("O rendimento de %.2f em %d meses e : %.2f",valor, periodo,valorF);

        printf("\nExecutar novamente: ?");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir == 's' || repetir == 'S');

    system("pause");
    return(0);
}
