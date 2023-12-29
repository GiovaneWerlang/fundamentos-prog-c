/*12)Fazer o programa para o algoritmo representado no fluxograma a seguir.
Que estrutura de repetição está representada neste fluxograma?

        Início

       Informe um
|-->   número positivo
|
|--  Sim --- Nr < 0
                |
                v
               Não
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
        printf("Informe um número positivo: ");
        scanf("%d",&num);

    }while(num<0);

    system("pause");
    return(0);
}
