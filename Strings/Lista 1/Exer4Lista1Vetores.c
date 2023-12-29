/*4) Ler um texto com até 50 caracteres. Percorrer esse texto e verificar quais caracteres
são vogais. Criar um vetor armazenando o número da vogal correspondente e somented as vogais
(1 para a, 2 para e ....). Para simplificar, considerar que serão informados somente
caracteres minúsculos.Por exemplo:
Informado o texto:
Texto para verificacao de vogais
Saída (vetor gerado):
2  4  1  1  2  3  3   1  1   4   4  1  3*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[51];

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
