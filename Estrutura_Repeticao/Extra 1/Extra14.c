/*14) Criar um algoritmo que leia um n�mero (NUM) e ent�o imprima os m�ltiplos de 3 e 5,
ao mesmo tempo, no intervalo fechado de 1 at� o n�mero lido. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;

    printf("Informe um n�mero: ");
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
