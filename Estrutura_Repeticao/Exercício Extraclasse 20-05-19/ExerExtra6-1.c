/*1) Fazer um programa que calcule o fatorial dos n�meros entre 1 e 12. Fazer a sa�da do programa
como mostrado na figura a seguir. Observe: colocar o s�mbolo de multiplica��o somente entre dois
n�meros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int numF, i, j, fat;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe a quantidade de n�meros para mostrar o fatorial: ");
            scanf("%d",&numF);
        }while(numF<=0);

        for(i=1;i<=numF;i++)
        {
            fat=1;
            printf("%d! => ",i);
            for(j=i;j>=2;j--)
            {
                printf("%d *",j);
                fat = fat * j;
            }
            printf(" 1 = %d\n",fat);
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
