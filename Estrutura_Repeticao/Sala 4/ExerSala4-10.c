/*10)Fazer o programa para o algoritmo representado no fluxograma a seguir.
Que estrutura de repeti��o est� representada neste fluxograma?

In�cio
Nr = 0
Nr <= 100     N�o
   |            |
   v            |
Nr = Nr + 1     |
                v
              Fim

*/
WHILE

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nr=0;

    while(nr<=100)
    {
        printf("%d\t",nr);
        if(nr%5==0)
        {
            printf("\n");
        }
        nr = nr+1;
    }


    system("pause");
    return(0);
}
