#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam = 20;
    int vet1[tam];
    int vet2[tam];
    char string[21];
    int i;
    do
    {
        system("cls");
        //
        gerarVetorIntervalo(vet1,tam, 0, 30);
        gerarVetorIntervalo(vet2,tam , 0, 30);

        for(i=0;i<tam;i++)
        {
            if(vet1[i]>vet2[i])
            {
                string[i] = 'P';
            }
            else if(vet2[i]>vet1[i])
            {
                string[i] = 'S';
            }
            else
            {
                string[i] = 'I';
            }
        }
        string[i]= '\0';

        mostrarVetorInt(vet1,tam);
        printf("\n");
        mostrarVetorInt(vet2,tam);
        printf("\n");
        printf("%s",string);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
