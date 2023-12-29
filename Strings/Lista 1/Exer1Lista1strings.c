/*1) Ler um nome. Se o primeiro caractere for 'a' imprimir esse nome. Se não for contar
quantos caracteres 'o' o nome possui. Repetir a leitura até que o usuário informe zero (0)
como primeiro caractere do nome.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir, nome[101];
    int retorno;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um nome: ");
            gets(nome);
            retorno = verificaCaractere(nome, 'a');
            if(nome[0]!='0')
            {
                if(retorno!=-1)
                {
                    mostrarString(nome);
                    printf("\n");
                }
                else
                {
                    retorno = contaCaractereString(nome, 'o');
                    printf("%s possui %d letras o\n",nome, retorno);
                }
            }
        }while(nome[0]!='0');
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
