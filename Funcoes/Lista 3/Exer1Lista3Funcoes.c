/*1) Implementar uma fun��o para calcular o fatorial de um n�mero. Essa fun��o recebe um n�mero
por par�metro e retorna o seu fatorial.  Implementar outra fun��o para apresentar os multiplicadores
no c�lculo do fatorial. Utilizando essas duas fun��es apresentar o fatorial de 1 at� um n�mero
informado pelo usu�rio. Esse valor deve estar entre um e 12. Validar a entrada. A sa�da deve ser
como apresentado na Figura a seguir. Observar que n�o h� o caractere que representa multiplica��o ap�s o n�mero 1*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pauseLimpa.h"
#include "fatorial.h"

int main(void)
{
    char repetir;
    int var, result;

    do
    {
        system("cls");
        //
            printf("C�lculo de fatorial de 1 a n.\n");
            do
            {
                printf("Informe o valor de n: ");
                scanf("%d",&var);
            }while(var<=1||var>12);

            mostrafatorial(var);



        printf("\nExecutar novamente (s/S pra sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
