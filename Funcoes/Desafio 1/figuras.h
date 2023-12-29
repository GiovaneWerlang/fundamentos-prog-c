#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimefig(int num , char c)
{
    int i;

    for(i=0;i<num;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}

/*void imprimefig(void)
{
    int num1, i, j, n[20];
    char f[20];

    do
    {
        printf("Quantas linhas a figura terá: ");
        scanf("%d",&num1);
    }while(num1<=0);



        for(i=1;i<=num1;i++)
        {
            printf("Informe o simbolo a ser impresso na linha %d:", i);
            fflush(stdin);
            scanf("%c",&f[i]);
            printf("Informe quantas vezes %c deve ser impresso na sua linha:",f[i]);
            scanf("%d",&n[i]);
        }




    for(i=1;i<=num1;i++)
    {
        for(j=1;j<=n[j];j++)
        {
            printf("%c",f[i]);
        }
        printf("\n");
    }
}*/
