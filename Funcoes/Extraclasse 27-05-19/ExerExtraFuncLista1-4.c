/*4) Fazer uma função que apresenta o resultado da multiplicação de dois números. Usar essa função
para:
a) Apresentar a multiplicação de dois números informados pelo usuário.
b) Apresentar a tabuada (0 a 10) de um número informado pelo usuário.*/

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
            printf("A - Multiplicar dois números informados.\n");
            printf("B - Apresentar tabuada de um número informado.\n");
            printf("Informe a opção desejada:\n");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    printf("Informe um número: ");
                    scanf("%d",&num1);
                    printf("Informe outro número: ");
                    scanf("%d",&num2);
                    result = multiplica(num1,num2);
                    printf("Multiplicação de %d por %d = %d",num1, num2, result);
                }
                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe o número do qual quer ver a tabuada(valor positivo): ");
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
