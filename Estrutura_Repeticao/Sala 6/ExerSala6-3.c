/*3) Ler um n�mero positivo e maior que zero (validar a entrada).
Esse n�mero indica a quantidade de valores �mpares e n�o divis�veis por 5 e divis�veis
por 7 que devem ser mostrados. Apresentar 'n' valores por linha. 'n' � informado pelo
usu�rio e deve ser maior que zero. Validar a entrada.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int n;
    int i;
    int cont=0;

    do
    {
        printf("Informe um n�mero positivo: ");
        scanf("%d",&num);
    }while(num<0);

    do
    {
        printf("Informe quantos valores por linha: ");
        scanf("%d",&n);
    }while(n<0);

    for(i=1;i<=num;i++)
    {
        if(i%2!=0&&i%5!=0&&i%7==0)
        {
            printf("%d\t",i);
            cont++;
            if(cont%n==0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    system("pause");
    return(0);
}
