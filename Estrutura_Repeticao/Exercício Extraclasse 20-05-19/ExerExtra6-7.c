/*7) Apresentar n valores divisíveis por 5 e não por 7 com x valores por linha. Validar n e x
adequadamente. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, x, linha=0, i,j;

    do
    {
        system("cls");
        //
        do
        {
            printf("Quantos valores mostrar (valor positivo)? ");
            scanf("%d",&n);
        }while(n<=0);

        do
        {
            printf("Quantos valores por linha mostrar (valor positivo)? ");
            scanf("%d",&x);
        }while(x<=0);

        for(j=1;linha<n;j++)
        {
            if(j%5==0&&j%7!=0)
            {
                printf("%d\t",j);
                linha++;
                if(linha%x==0)
                {
                    printf("\n");
                }
            }
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
