/*4) Apresentar n valores que atende a x e y condições. n, x e y são informados pelo usuário e
devem ser maiores que zero. Validar. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, x, y, i;

    do
    {
        system("cls");
        //
        printf("Objetivo: apresentar n valores que atendem as condições x e y\n");

        do
        {
            printf("Quantos valores mostrar (valor positivo):");
            scanf("%d",&n);
        }while(n<=0);

        do
        {
            printf("Qual o primeiro divisor, condição x(valor positivo):");
            scanf("%d",&x);
        }while(n<=0);

        do
        {
            printf("Qual o segundo divisor, condição y (valor positivo):");
            scanf("%d",&y);
        }while(n<=0);

        for(i=1;i<=n;i++)
        {
            if(i%x==0&&i%y==0)
            {
                printf("%d\t",i);
            }
        }
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
