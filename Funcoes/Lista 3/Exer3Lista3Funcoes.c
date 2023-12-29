/*3) Fazer fun��es para:
a) mostrar os m�ltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor at� o qual os m�ltiplos de
y devem ser mostrados. A fun��o recebe por par�metro o n�mero e valor que representa m�ltiplo
de. Por exemplo: par�metros 10 (como x) e 2 (como y) significa os m�ltiplos de 2 entre 2 e 10.

a) somar os m�ltiplos  de y entre 1 (se for o caso) e 'x', sendo 'x' o valor at� o qual os m�ltiplos
devem   ser   somados.   Por   exemplo:   par�metros   10   (como   x)   e   2   (como   y)   significa   somar   os
m�ltiplos de 2 entre 2 e 10. Esse valor (30, no caso) deve ser retornado da fun��o.

Ler dois  valores  que representam os  limites  do intervalo e outro  valor que  � o �m�ltiplo  de�.
Utilizado essas duas fun��es apresentar a sa�da da seguinte forma. Nesse exemplo os valores para
os limites s�o 10 e 13 e o �m�ltiplo de� � 2.

10 � 2, 4, 6, 8, 10. Soma: 30.
11 � 2, 4, 6, 8, 10. Soma: 30.
12 - 2, 4, 6, 8, 10, 12. Soma: 42.
13 - 2, 4, 6, 8, 10, 12. Soma: 42.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pauseLimpa.h"
#include "multiplos.h"

int main(void)
{
    char repetir;
    int limiteInf, limiteSup, mult, soma;
    int i;

    do
    {
        system("cls");
        //
            do
            {
                printf("Informe o primeiro limite: ");
                scanf("%d",&limiteInf);
            }while(limiteInf<=0);
            do
            {
                printf("Informe o segundo limite: ");
                scanf("%d",&limiteSup);
            }while(limiteInf<=0);
            do
            {
                printf("Informe o multiplicando: ");
                scanf("%d",&mult);
            }while(mult<=0);
            if(limiteSup<limiteInf)
            {
                soma = limiteInf;
                limiteInf = limiteSup;
                limiteSup = soma;
            }
            for(i=limiteInf;i<=limiteSup;i++)
            {
                mostraMult(i,mult);
                soma = somaMult(i,mult);
                printf("Soma : %d.\n",soma);

            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    limparBuffer();
    return(0);
}
