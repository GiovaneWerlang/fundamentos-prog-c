/*2) Calcular e mostrar o fatorial de um n�mero informado pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;
    int soma;
    soma =1;

    printf("Informe um n�mero: ");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
        soma = soma * i;
    }
    printf("%d\n",soma);

    system("pause");
    return(0);
}
/* for(i=num;i>1;i--)*/
