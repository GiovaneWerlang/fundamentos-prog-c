/*12) Faça um programa que imprima os 'n' (indicado pelo usuário) primeiros números
pares. Apresentar cinco valores por linha.Por exemplo, se o usuário informar 10,
mostrar:
0    2    4    6     8 //primeira linha com cinco números
10 12  14  16  18 // segunda linha com cinco números. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;
    int cont;
    cont = 0;

    printf("Informe quantos números pares quer ver: ");
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
