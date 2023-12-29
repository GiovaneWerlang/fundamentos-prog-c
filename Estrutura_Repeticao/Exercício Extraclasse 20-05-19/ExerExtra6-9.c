/*9) Fa�a um algoritmo que o usu�rio informa um n�mero e o algoritmo verifica se ele � um n�mero
triangular. Um n�mero � triangular quando o resultado do produto de tr�s n�meros consecutivos.
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
            printf("Informe um n�mero (valor positivo): ");
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
                printf("%d � triangular. \n",num);
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
                    printf("%d n�o � triangular.\n ",num);
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
