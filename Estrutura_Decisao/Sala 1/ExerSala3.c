/*3) Elaborar um algoritmo que leia um caractere. Se informado �F� ou �f� mostrar a mensagem �pessoa f�sica�,
se informado �J� ou �j� mostrar a mensagem �pessoa jur�dica� ou "tipo de pessoa inv�lido" para qualquer outro caractere.
char Pessoa; //declarar uma vari�vel do tipo char
scanf(�%c�,&Pessoa); //para ler um char
if (Pessoa == �f� || Pessoa == �F�) //para comparar se o conte�do armazenado na vari�vel� um determinado caractere.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Pessoa;

    printf("Pessoa f�sica ou jur�dica (F/f/J/j): ");
    scanf("%c",&Pessoa); //pessoa(60) para indicar o maximo de caracteres a armazenar

    if ( Pessoa == 'F' || Pessoa == 'f')
    {
        printf("Pessoa F�sica\n");
    }
    else if ( Pessoa == 'J' || Pessoa == 'j')
    {
        printf("Pessoa Jur�dica\n");
    }
    else
    {
        printf("Caractere inv�lido\n");
    }

    system("pause");
    return(0);
}
