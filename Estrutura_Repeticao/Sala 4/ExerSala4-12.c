/*12)Fazer o programa para o algoritmo representado no fluxograma a seguir.
Que estrutura de repeti��o est� representada neste fluxograma?

        In�cio

       Informe um
|-->   n�mero positivo
|
|--  Sim --- Nr < 0
                |
                v
               N�o
                |
                v
               Fim

DO WHILE
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num =1;

    do{
        printf("Informe um n�mero positivo: ");
        scanf("%d",&num);

    }while(num<0);

    system("pause");
    return(0);
}
