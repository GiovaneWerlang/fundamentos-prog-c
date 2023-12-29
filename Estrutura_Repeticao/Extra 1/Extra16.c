/*16) Escreva um algoritmo que leia 10 números e imprima quantos números são múltiplos de 3 e 5.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[10];
    int mult3=0, mult5=0;
    int i;

    for(i=0;i<=9;i++)
    {
        printf("Informe um número: ");
        scanf("%d",&num[i]);

        if(num[i]%3==0)
        {
            mult3++;
        }
        if(num[i]%5==0)
        {
            mult5++;
        }
    }

    printf("%d números são múltiplos de 3\n%d números são múltiplos de 5\n",mult3,mult5);


    system("pause");
    return(0);
}
