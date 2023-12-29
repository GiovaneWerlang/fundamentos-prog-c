/*2) Elaborar um programa que aceita e valida uma senha com 6 d�gitos num�ricos, que
deve ser armazenada em uma string. O usu�rio tem tr�s tentativas para acertar a senha,
se ultrapassar esse limite, ele deve ser informado. O usu�rio tamb�m deve ser informado
se ele acertou a senha em at� tr�s tentativas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char senha[7];
    char tentativa[7];
    int retorno;
    int cont;

    do
    {
        system("cls");
        cont=0;
        //
        printf("Informe qual ser� a senha: ");
        fflush(stdin);
        gets(senha);

        do
        {

            printf("Informe a senha para entrar (m�ximo de 3 tentativas): ");
            gets(tentativa);
            retorno = comparaString(senha, tentativa);
            if(retorno==1)
            {
                cont++;
                if(cont==3)
                {
                    printf("Senha informada est� incorreta, limite atingido.\n");
                    printf("Tente novamente mais tarde.\n");
                    retorno=0;
                }
            }
            else
            {
                printf("Senha correta em menos de tr�s tentativas.\nBem vindo(a)");
            }
        }while(retorno==1);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
