/*12) Fa�a um programa que imprima os 'n' (indicado pelo usu�rio) primeiros n�meros
pares. Apresentar cinco valores por linha.Por exemplo, se o usu�rio informar 10,
mostrar:
0    2    4    6     8 //primeira linha com cinco n�meros
10 12  14  16  18 // segunda linha com cinco n�meros. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;
    int cont;
    cont = 0;

    printf("Informe quantos n�meros pares quer ver: ");
    scanf("%d",&num);
    for(i=0;i<num;)
    {
        printf("%d\t",cont);
        i++;
        if(i%5==0)
        {
            printf("\n");
        }
        cont = cont +2;
    }
    printf("\n");
    system("pause");
    return(0);
}
