/*4) Apresentar n valores que atende a x e y condi��es. n, x e y s�o informados pelo usu�rio e
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
        printf("Objetivo: apresentar n valores que atendem as condi��es x e y\n");

        do
        {
            printf("Quantos valores mostrar (valor positivo):");
            scanf("%d",&n);
        }while(n<=0);

        do
        {
            printf("Qual o primeiro divisor, condi��o x(valor positivo):");
            scanf("%d",&x);
        }while(n<=0);

        do
        {
            printf("Qual o segundo divisor, condi��o y (valor positivo):");
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
