/*18) Escreva um algoritmo que realize o produto de A (n�mero real)
por B (n�mero inteiro), ou seja, A * B,
utilizando de adi��es (somas).
Esses dois valores s�o informados pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int A, B;
    int produto=0;

    printf("Informe o valor de A: ");
    scanf("%d",&A);
    printf("Informe o valor de B: ");
    scanf("%d",&B);

    for(i=1;i<=B;i++)
    {
        produto = produto + A;
    }
    printf("O produto de %d por %d e: %d\n",A, B, produto);

    system("pause");
    return(0);
}
