/*15) Escreva um algoritmo que leia 10 números inteiros e imprima quantos são pares e quantos são ímpares. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[10];
    int i;
    int somaP=0, somaI=0;

    for(i=0;i<10;i++)
    {
        printf("Informe um número: ");
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            somaP++;
        }
        else
        {
            somaI++;
        }
    }
    printf("%d números pares e %d números ímpares.\n",somaP,somaI);



    system("pause");
    return(0);
}
