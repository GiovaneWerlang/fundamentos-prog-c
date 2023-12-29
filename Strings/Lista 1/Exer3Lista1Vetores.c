/*3) Ler um nome e ler um caractere. Contar quantos caracteres o nome possui.
Verificar se o caractere informado está na string (nome lido). Se estiver,
mostrar o índice em que o mesmo está armazenado. Considerar a última ocorrência
do caractere se existir mais de uma. Complementar o exercício considerando
a primeira concorrência do caractere na string.
Gerar uma função para contar a quantidade de caracteres da string e outra para
verificar se o caractere está na string.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char nome[101];//para armazenar até 100 caracteres, indice 0 a 99 no último indice ficará o \n que indica final da string

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
        printf("%c não está em %s\n", caractere, nome);
    }
    else
    {
        printf("A primeira ocorrência de %c está em %s no índice [%d]\n", caractere, nome, retorno);
    }
    //void gerarString
    gerarString(nome, 101);
    printf("\n\nString gerada: ");
    //void mostrarString
    mostrarString(nome);

}
