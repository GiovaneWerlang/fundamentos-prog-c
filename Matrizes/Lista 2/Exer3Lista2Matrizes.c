/*3) Gerar uma matriz 5x5. Mostrar a matriz obtida. Em seguida preencher com 1 a diagonal principal
e com 0 os demais elementos. Mostrar novamente a matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;

    do
    {
        system("cls");
        //
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
