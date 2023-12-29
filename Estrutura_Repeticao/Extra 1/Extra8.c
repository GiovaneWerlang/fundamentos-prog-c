/*8) Escreva um algoritmo que leia oito números inteiros e imprima a metade de cada número informado. Mostrar assim:
Valor   Metade
8        4
5        2,5
9        4,5
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int num;
    float result;
    int a[9];

    for(i=1;i<=8;i++)
    {
        printf("Informe um número: ");
        scanf("%d",&a[i]);
    }
    printf("\nValor\tMetade\n");
    for(i=1;i<=8;i++)
    {
        result = a[i]/(float)2;
        printf("%d\t\t%.1f\n",a[i],result);
    }
    printf("\n");
    system("pause");
    return(0);
}
