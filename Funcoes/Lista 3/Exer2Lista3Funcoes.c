/*2) Fazer funções para:
a) Mostrar os divisores de um número.
b) Calcular a quantidade de divisores de um número. Essa quantidade deve ser retornada da função.
c) Encontrar a maior quantidade de divisores de um intervalo de números. Essa quantidade deve
ser retornada da função.
d) Encontrar o número que possui a maior quantidade de divisores de um intervalo de números. O
número deve ser retornado da função.
    Para implementar as funções em c) e d) deve, obrigatoriamente, ser utilizada a função em b)

    Utilizando, obrigatoriamente essas  quatro funções, ler dois valores que representam os limites de
um intervalo de valores e apresentar da seguinte forma
(informados 10 e 13 como intervalo):
10 – 1, 2, 5, 10.  4 divisores.
11 – 1, 11. 2 divisores.
12 – 1, 2, 3, 4, 6, 12. 6 divisores.
13 – 1, 13. 2 divisores.
A maior quantidade de divisores desse intervalo é 6 e pertence ao número 12.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pauseLimpa.h"
#include "divisores.h"

int main(void)
{
    char repetir;
    int limiteInf, limiteSup, i, j;

    do
    {
        system("cls");
        //
            printf("Cálculo de divisores de um intervalo:\n");
            do
            {
                printf("Informe o primeiro limite: ");
                scanf("%d",&limiteInf);
            }while(limiteInf<=0);
            do
            {
                printf("Informe o segundo limite: ");
                scanf("%d",&limiteSup);
            }while(limiteSup<=0);
            if(limiteSup<limiteInf)
            {
                i = limiteInf;
                limiteInf = limiteSup;
                limiteSup = i;
            }
            for(i=limiteInf;i<=limiteSup;i++)
            {
                mostradivisor(i);
            }
            i = maiorqtdeD(limiteInf,limiteSup);
            j = numMaiorqtdeD(limiteInf, limiteSup);
            printf("A maior quantidade de divisores desse intervalo é %d e pertence ao número %d.\n",i ,j);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    limparBuffer();
    return(0);
}
