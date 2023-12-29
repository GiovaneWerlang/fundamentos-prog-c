/*3) Fazer funções para:
a) mostrar os múltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor até o qual os múltiplos de
y devem ser mostrados. A função recebe por parâmetro o número e valor que representa múltiplo
de. Por exemplo: parâmetros 10 (como x) e 2 (como y) significa os múltiplos de 2 entre 2 e 10.

a) somar os múltiplos  de y entre 1 (se for o caso) e 'x', sendo 'x' o valor até o qual os múltiplos
devem   ser   somados.   Por   exemplo:   parâmetros   10   (como   x)   e   2   (como   y)   significa   somar   os
múltiplos de 2 entre 2 e 10. Esse valor (30, no caso) deve ser retornado da função.

Ler dois  valores  que representam os  limites  do intervalo e outro  valor que  é o “múltiplo  de”.
Utilizado essas duas funções apresentar a saída da seguinte forma. Nesse exemplo os valores para
os limites são 10 e 13 e o “múltiplo de” é 2.

10 – 2, 4, 6, 8, 10. Soma: 30.
11 – 2, 4, 6, 8, 10. Soma: 30.
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
