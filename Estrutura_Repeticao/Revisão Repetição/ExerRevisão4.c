/*4) Fazer um programa que leia cinco n�meros inteiros no intervalo entre 10 at� 20, inclusive.
Validar a entrada. Para cada n�mero lido exibir a sequ�ncia dos pares de 2 at� o n�mero gerado e a
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
