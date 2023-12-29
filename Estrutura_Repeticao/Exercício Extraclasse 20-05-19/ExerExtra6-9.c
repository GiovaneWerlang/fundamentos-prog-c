/*9) Faça um algoritmo que o usuário informa um número e o algoritmo verifica se ele é um número
triangular. Um número é triangular quando o resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int num, produto, x, y, z;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um número (valor positivo): ");
            scanf("%d",&num);
        }while(num<=0);

        x=1;
        y=2;
        z=3;
        do
        {

            produto = x*y*z;
            if(produto==num)
            {
                printf("%d é triangular. \n",num);
                break;
            }
            else
            {
                if(produto<num)
                {
                    x++;
                    y++;
                    z++;
                }
                if(produto>num)
                {
                    printf("%d não é triangular.\n ",num);
                }
            }

        }while(produto<=num);
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
