/*12) Criar um algoritmo que imprima todos os números de 1 até 100,
inclusive, e a soma e a média de todos eles.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    float media=0;
    int soma=0;
    int cont=0;

    for(i=1;i<=100;i++)
    {
        printf("%d\t",i);
        if(i%5==0)
           {
               printf("\n");
           }
        cont = cont + 1;
        media = media + i;
        soma = soma + i;
    }
    media = (float)media/cont;
    printf("\n%d\n",cont);
    printf("\nSoma: %d\nMedia: %.2f\n",soma, media);

    system("pause");
    return(0);
}
