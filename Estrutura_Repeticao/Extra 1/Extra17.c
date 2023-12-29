/*17) Escreva um algoritmo que leia 10 números e imprima a soma dos positivos
e o total de números negativos informados.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[10];
    int somaP=0;
    int qtdeN=0;
    int i;

    for(i=0;i<=9;i++)
    {
        printf("Informe um número: ");
        scanf("%d",&num[i]);
        if(num[i]>=0)
        {
            somaP = somaP + num[i];
        }
        else
        {
            qtdeN++;
        }
    }
    printf("Soma dos positivos: %d\nTotal de negativos: %d\n",somaP,qtdeN);
    system("pause");
    return(0);
}
