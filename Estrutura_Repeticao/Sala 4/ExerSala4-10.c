/*10)Fazer o programa para o algoritmo representado no fluxograma a seguir.
Que estrutura de repetição está representada neste fluxograma?

Início
Nr = 0
Nr <= 100     Não
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
