/*4) Elaborar um programa para implementar a opera��o de pot�ncia.
Exemplo: 2^3 � 8*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, potencia;
    int i, cont=1;

    printf("Informe um n�mero: ");
    scanf("%d",&num);
    printf("Informe a potencia: ");
    scanf("%d",&potencia);

    for(i=1;i<=potencia;i++)
    {
        cont = cont * num;
    }

    printf("%d elevado a potencia %d �: %d\n",num,potencia,cont);

    system("pause");
    return(0);
}
