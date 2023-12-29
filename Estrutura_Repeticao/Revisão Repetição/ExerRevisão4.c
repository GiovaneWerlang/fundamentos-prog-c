/*4) Fazer um programa que leia cinco números inteiros no intervalo entre 10 até 20, inclusive.
Validar a entrada. Para cada número lido exibir a sequência dos pares de 2 até o número gerado e a
soma desses pares. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int num, soma=0;

    do
    {
        system("cls");
        //
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');

    system("pause");
    return(0);
}
