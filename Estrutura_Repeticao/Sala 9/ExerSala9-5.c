/*5) Apresentar n valores divisíveis por 5 e não por 7 com x valores por linha. Validar n e x que
devem ser positivos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, x, i, linha=0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Quantos números apresentar? (valor positivo)");
            scanf("%d",&n);
        }while(n<=0);

        do
        {
            printf("Quantos valores por linha? (valor positivo) ");
            scanf("%d",&x);
        }while(x<=0);

        for(i=1;i<=n;i++)
        {
            if(i%5==0&&i%7!=0)
            {
                printf("%d\t",i);
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
