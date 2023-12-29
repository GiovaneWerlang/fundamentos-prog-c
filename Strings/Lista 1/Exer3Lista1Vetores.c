/*3) Ler um nome e ler um caractere. Contar quantos caracteres o nome possui.
Verificar se o caractere informado est� na string (nome lido). Se estiver,
mostrar o �ndice em que o mesmo est� armazenado. Considerar a �ltima ocorr�ncia
do caractere se existir mais de uma. Complementar o exerc�cio considerando
a primeira concorr�ncia do caractere na string.
Gerar uma fun��o para contar a quantidade de caracteres da string e outra para
verificar se o caractere est� na string.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char nome[101];//para armazenar at� 100 caracteres, indice 0 a 99 no �ltimo indice ficar� o \n que indica final da string

    char caractere;
    int retorno;

    printf("Informe uma string: ");
    gets(nome); //scanf("%[^\n]s", nome);
    printf("Informe um caractere: ");
    fflush(stdin);
    scanf("%c",&caractere);
    retorno = contaString(nome);
    printf("A string %s possui %d caracteres\n", nome, retorno);
    retorno = verificaCaractere(nome, caractere);
    if(retorno== -1)
    {
        printf("%c n�o est� em %s\n", caractere, nome);
    }
    else
    {
        printf("A primeira ocorr�ncia de %c est� em %s no �ndice [%d]\n", caractere, nome, retorno);
    }
    //void gerarString
    gerarString(nome, 101);
    printf("\n\nString gerada: ");
    //void mostrarString
    mostrarString(nome);

}
