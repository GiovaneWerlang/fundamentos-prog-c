/*2) Escreva um programa que imprima todas as possibilidades de que no lançamento de dois
dados a soma das faces seja um valor informado pelo usuário. O usuário deve informar um valor válido,
entre 2 a 12. Repetir a leitura até que o usuário informe um valor válido.
Mostrar da seguinte forma, para, por exemplo, informado o valor 7:
1 + 6 = 7
2 + 5 = 7
3 + 4 = 7
4 + 3 = 7
5 + 2 = 7
6 + 1 = 7*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int valor;
    int i, p;

    do
    {
        system("cls");

        do
        {
            printf("Informe um valor entre 2 a 12: ");
            scanf("%d",&valor);
        }while(valor <2 || valor > 12);

        for(i=1;i<valor;i++)
        {
            for(p=valor-1;p>=1;p--)
            {
                if(i + p == valor)
                {
                    printf("%d + %d = %d\n",i,p,valor);
                }
            }
        }
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir == 's'||repetir == 'S');

    system("pause");
    return(0);
}
