/*6) Apresentar n valores que atende às condições de serem divisíveis por x e por y. Esses valores são
informados pelo usuário e devem ser maiores que zero. Validá-los. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, x, y, contM=0, cont=1;

    do
    {
        system("cls");
        //
        printf("Objetivo: apresentar n valores que atendem as condições x e y\n ");

        do
        {
            printf("Quantos valores mostrar (valor positivo): ");
            scanf("%d",&n);
        }while(n<=0);

        do
        {
            printf("Qual o primeiro divisor, condição x (valor positivo): ");
            scanf("%d",&x);
        }while(x<=0);

        do
        {
            printf("Qual o segundo divisor, condição y (valor positivo): ");
            scanf("%d",&y);
        }while(n<=0);

        while(contM<n)
        {
            if(cont%x==0&&cont%y==0)
            {
                printf("%d\t",cont);
                contM++;
            }
            cont++;
        }
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
