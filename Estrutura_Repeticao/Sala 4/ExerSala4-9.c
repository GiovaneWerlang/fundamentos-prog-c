/*9) Imprimir os números de 100 a 0 (nessa ordem) utilizando uma estrutura while.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cont = 100;

    while(cont>=0)
    {
        printf("%d\t",cont);
        if(cont%5==0)
        {
            printf("\n");
        }
        cont--;
    }


    system("pause");
    return;
}
