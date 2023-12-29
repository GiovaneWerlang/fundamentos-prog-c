/*4) Fazer uma fun��o que apresenta o resultado da multiplica��o de dois n�meros. Usar essa fun��o
para:
a) Apresentar a multiplica��o de dois n�meros informados pelo usu�rio.
b) Apresentar a tabuada (0 a 10) de um n�mero informado pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include "mult2.h"

int main(void)
{
    char repetir, opcao;
    int num1, num2, result, i;

    do
    {
        system("cls");
        //
            printf("Multiplicadora:\n");
            printf("A - Multiplicar dois n�meros informados.\n");
            printf("B - Apresentar tabuada de um n�mero informado.\n");
            printf("Informe a op��o desejada:\n");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    printf("Informe um n�mero: ");
                    scanf("%d",&num1);
                    printf("Informe outro n�mero: ");
                    scanf("%d",&num2);
                    result = multiplica(num1,num2);
                    printf("Multiplica��o de %d por %d = %d",num1, num2, result);
                }
                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe o n�mero do qual quer ver a tabuada(valor positivo): ");
                        scanf("%d",&num1);
                    }while(num1<=0);

                    for(i=0;i<=10;i++)
                    {
                        result = multiplica(num1,i);
                        printf("%d x %d = %d\n",num1,i,result);
                    }
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
