/*3) Elaborar um programa para implementar a opera��o de pot�ncia.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,result=1;
    int potencia;
    int i;

    printf("Informe um n�mero: ");
    scanf("%d",&num);
    printf("Informe a qual pot�ncia deseja elevar o n�mero: ");
    scanf("%d",&potencia);

    for(i=0;i<potencia;i++)
    {
        result = result * num;
    }

    printf("%d elevado a pot�ncia %d e: %d",num, potencia,result);

    system("pause");
    return(0);
}
