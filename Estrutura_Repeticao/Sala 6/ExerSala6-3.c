/*3) Ler um número positivo e maior que zero (validar a entrada).
Esse número indica a quantidade de valores ímpares e não divisíveis por 5 e divisíveis
por 7 que devem ser mostrados. Apresentar 'n' valores por linha. 'n' é informado pelo
usuário e deve ser maior que zero. Validar a entrada.*/

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
        printf("Informe um número positivo: ");
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
