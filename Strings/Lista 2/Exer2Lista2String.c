#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[201];
    int qtde=0;
    int i=0;

    do
    {
        system("cls");
        //

        printf("Digite uma frase: ");
        fflush(stdin);
        gets(texto);

        while(texto[i]!='\0')
        {
            if(texto[i]==' ')
            {
                qtde++;
            }
            else
            {
                if(qtde>0)
                {
                    printf("%d\t",qtde);
                }

                qtde=0;
            }
            i++;
        }
        printf("\nExecutar novamente(s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
