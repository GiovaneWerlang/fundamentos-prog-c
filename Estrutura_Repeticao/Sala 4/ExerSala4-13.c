/*13) Fazer o programa para o algoritmo representado no fluxograma a seguir.
Que estrutura de repeti��o est� representada neste fluxograma?  DO WHILE

In�cio
    |
    v
Cont=0
    |------------------------------------------|
    v                                          |
Cont<=10 --->Sim--->mostre Cont Num ---> Cont = Cont +1
    |
    v
    N�o
    |
    v
    Fim
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cont=0;

    do{
        printf("Cont %d\t",cont);
        cont = cont + 1;

    }while(cont<=10);

    system("pause");
    return(0);
}
