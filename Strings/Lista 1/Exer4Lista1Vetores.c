/*4) Ler um texto com at� 50 caracteres. Percorrer esse texto e verificar quais caracteres
s�o vogais. Criar um vetor armazenando o n�mero da vogal correspondente e somented as vogais
(1 para a, 2 para e ....). Para simplificar, considerar que ser�o informados somente
caracteres min�sculos.Por exemplo:
Informado o texto:
Texto para verificacao de vogais
Sa�da (vetor gerado):
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
