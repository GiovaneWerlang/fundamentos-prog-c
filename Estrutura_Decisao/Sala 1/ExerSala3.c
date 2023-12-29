/*3) Elaborar um algoritmo que leia um caractere. Se informado ‘F’ ou ‘f’ mostrar a mensagem “pessoa física”,
se informado ‘J’ ou ‘j’ mostrar a mensagem “pessoa jurídica” ou "tipo de pessoa inválido" para qualquer outro caractere.
char Pessoa; //declarar uma variável do tipo char
scanf(“%c”,&Pessoa); //para ler um char
if (Pessoa == ‘f’ || Pessoa == ‘F’) //para comparar se o conteúdo armazenado na variávelé um determinado caractere.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Pessoa;

    printf("Pessoa física ou jurídica (F/f/J/j): ");
    scanf("%c",&Pessoa); //pessoa(60) para indicar o maximo de caracteres a armazenar

    if ( Pessoa == 'F' || Pessoa == 'f')
    {
        printf("Pessoa Física\n");
    }
    else if ( Pessoa == 'J' || Pessoa == 'j')
    {
        printf("Pessoa Jurídica\n");
    }
    else
    {
        printf("Caractere inválido\n");
    }

    system("pause");
    return(0);
}
