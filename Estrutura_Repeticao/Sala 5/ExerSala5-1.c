/*1) Ler um número que representa a quantidade de valores pares,
divisíveis por 3 e não divisíveis por 5  que devem ser mostrados.
Apresentar esses valores n por linha. n é informado pelo usuário e deve ser positivo.
Os valores são apresentados separados por tabulação.

Por exemplo:
O usuário digita 7 (significa que ele quer visualizar os sete
primeiros valores que atendem condições) e em seguida 5 (que significa
a quantidade de valores por linha que devem sermostrados).
Será mostrado:  6   12  18  24  36 //cinco valores por linha
                42  48*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int qtdeN, qtdeL;
    int i=0,cont=0;

    printf("Informe a quantidade de números a ser mostrada: ");
    scanf("%d",&qtdeN);
    printf("Informe a quantidade de valores por linha: ");
    scanf("%d",&qtdeL);

    for(i=0;i<=qtdeN;i++)
    {
        if(i%2==0&&i%3==0&&i%5!=0)
        {
            printf("%d\t",i);
            cont++;
            if(cont%qtdeL==0)
            {
                printf("\n");
            }
        }


    }





    system("pause");
    return(0);
}
