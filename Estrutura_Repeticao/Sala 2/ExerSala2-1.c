/*1) Apresentar a tabuada de um n�mero informado pelo usu�rio.
A tabuada deve ser apresentada na forma a seguir
(sendo 'a' o valor informado e as outras letras o resultado da multiplica��o):
a * 0 = ca * 1 = d..a * 10 = z*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;

    printf("Informe um n�mero: ");
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        printf("%d * %d = %d\n",i,num,i*num);
    }


    system("pause");
    return(0);
}
