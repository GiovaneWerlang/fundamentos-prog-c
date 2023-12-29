/*3) Elaborar um programa para implementar a operação de potência.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,result=1;
    int potencia;
    int i;

    printf("Informe um número: ");
    scanf("%d",&num);
    printf("Informe a qual potência deseja elevar o número: ");
    scanf("%d",&potencia);

    for(i=0;i<potencia;i++)
    {
        result = result * num;
    }

    printf("%d elevado a potência %d e: %d",num, potencia,result);

    system("pause");
    return(0);
}
