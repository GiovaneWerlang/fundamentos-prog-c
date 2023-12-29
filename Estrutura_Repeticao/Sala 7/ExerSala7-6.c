/*6) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário.
Se o usuário informar um número negativo transformá-lo em positivo antes de utilizar.
Por exemplo:
Informe a quantidade de números pares a serem mostrados:
3
mostrar da seguinte forma (incluindo a mensagem antes dos números):
Os 3 primeiros números pares são: 6 12 18*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, i, cont=0;

    do
    {
        system("cls");

        do
        {
            printf("Informe a quantidade de números pares a serem mostrados: ");
            scanf("%d",&n);
            if(n<0)
            {
                n = n * -1;
            }
        }while(n==0);

        printf("Os %d primeiros números pares são:  \n",n);

        for(i=1;cont<n;i++)
        {
            if(i%2==0&&i%3==0)
            {
                printf("%5d  ",i);
                cont++;
                if(cont % 5==0)
                {
                    printf("\n");
                }
            }

        }
        printf("\n");
        printf("Executar novamente: ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
