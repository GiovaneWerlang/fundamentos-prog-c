/*14) Criar um algoritmo que leia um número (NUM) e então imprima os múltiplos de 3 e 5,
ao mesmo tempo, no intervalo fechado de 1 até o número lido. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;

    printf("Informe um número: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%3==0||i%5==0)
        {
            printf("%d\t",i);
        }
        /*if(i%5==0)
        {
            printf("%d\t",i);
        }
        printf("\n");*/
    }


    system("pause");
    return(0);
}
