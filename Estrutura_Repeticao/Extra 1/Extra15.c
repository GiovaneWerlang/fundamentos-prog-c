/*15) Escreva um algoritmo que leia 10 n�meros inteiros e imprima quantos s�o pares e quantos s�o �mpares. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[10];
    int i;
    int somaP=0, somaI=0;

    for(i=0;i<10;i++)
    {
        printf("Informe um n�mero: ");
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
    printf("%d n�meros pares e %d n�meros �mpares.\n",somaP,somaI);



    system("pause");
    return(0);
}
