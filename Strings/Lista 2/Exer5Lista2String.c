#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char expressao[51];
    int pares[6] = {0};


    do
    {
        system("cls");
        //
        printf("Digite uma expressao matematica: ");
        fflush(stdin);
        gets(expressao);
        int i=0;
        int j=0;

        while(expressao[i]!= '\0')
        {
            if(expressao[i]== '[')
            {
                pares[0]++;
            }
            else if(expressao[i]== ']')
            {
                pares[1]++;
            }
            else if(expressao[i]== '(')
            {
                pares[2]++;
            }
            else if(expressao[i]== ')')
            {
                pares[3]++;
            }
            else if(expressao[i]== '{')
            {
                pares[4]++;
            }
            else if(expressao[i]== '}')
            {
                pares[5]++;
            }

            i++;
        }
            if(pares[0]==pares[1]&&pares[2]==pares[3]&&pares[4]==pares[5])
            {
                 printf("Expressao balanceada");
            }
            else
            {
                printf("Expressao não balanceada");
            }


        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}


