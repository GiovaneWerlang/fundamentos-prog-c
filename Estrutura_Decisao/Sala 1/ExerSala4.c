/*4) Escreva um algoritmo que leia um n�mero e verifique se ele se encontra no intervalo entre 5 e 20.
Mostre uma mensagem se o n�mero est� nesse intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Informe um n�mero inteiro: ");
    scanf("%d",&num);

    if(num>=5 && num<=20)
    {
        printf("O numero %d esta no intervalo entre 5 e 20\n",num);
    }
    else
    {
        printf("O numero %d esta fora do intervalo entre 5 e 20\n",num);
    }

    system("pause");
    return(0);
}
