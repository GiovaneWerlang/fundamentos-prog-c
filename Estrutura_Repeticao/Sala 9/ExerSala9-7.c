/*7) Apresentar as ‘n’ primeiras raízes quadradas exatas. Validar n que deve ser positivo.
Exemplo: apresentado 5 para n, mostrar
Número raiz
1 1
4 2
9 3
16 4
25 5 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n,i,r;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe a quantidade de raizes a serem mostradas: ");
            scanf("%d",&n);
        }while(n<=0);

        for(i=1;i<=n;i++)
        {
            r= i * i;
            printf("%d %d\n",r,i);
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
