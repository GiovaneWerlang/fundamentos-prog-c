/*1)Fazer o programa para o algoritmo representado no fluxograma a seguir.
Que estrutura de repeti��o est� representada neste fluxograma?

     In�cio
     Nr = 0
|--> Nr <= 100
|
|
|--- Nr = Nr + 1
        N�o
         |
         v
         Fim





*/
DO WHILE

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nr=0;

    do{
        printf("%d\t",nr);
        if(nr%5==0)
        {
            printf("\n");
        }
        nr = nr + 1;


    }while(nr<=100);

    system("pause");
    return(0);
}
