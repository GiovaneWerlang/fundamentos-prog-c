#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"
#include "vetores.h"

int main(void)
{
    char repetir;
    char texto[101];
    int qtd[100];

    do
    {
        system("cls");
        //
        int i=0;
        int j=0;
        printf("Digite uma frase: ");
        fflush(stdin);
        gets(texto);

        while(texto[i]!= '\0')
        {
            int qtde = 0;
            while(texto[i]==' ')
            {
                qtde++;
                i++;
            }

            if(qtde>0)
            {
                qtd[j] = qtde;
                j++;
            }
            i++;
        }
        mostrarVetorInt(qtd,j);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}

