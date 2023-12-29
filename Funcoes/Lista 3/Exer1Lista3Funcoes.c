/*1) Implementar uma função para calcular o fatorial de um número. Essa função recebe um número
por parâmetro e retorna o seu fatorial.  Implementar outra função para apresentar os multiplicadores
no cálculo do fatorial. Utilizando essas duas funções apresentar o fatorial de 1 até um número
informado pelo usuário. Esse valor deve estar entre um e 12. Validar a entrada. A saída deve ser
como apresentado na Figura a seguir. Observar que não há o caractere que representa multiplicação após o número 1*/

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
            printf("Cálculo de fatorial de 1 a n.\n");
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
