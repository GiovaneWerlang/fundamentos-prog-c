/*5) Apresentar os números primos entre 1 e 100.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int i, p;
    int qtde=0;

    do
    {
        system("cls");
        //
        for(i=1;i<=100;i++)
        {
            qtde = 0;
            for(p=2;p<=i/2;p++)
            {
                if(i % p == 0)
                {
                    qtde++;
                    break;//p = i;
                }
            }
            if(qtde == 0)
                {
                    printf("%d\t",i);
                }
        }
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir == 's'|| repetir == 'S');

    system("pause");
    return(0);
}
