/*2) Elaborar um programa que aceita e valida uma senha com 6 dígitos numéricos, que
deve ser armazenada em uma string. O usuário tem três tentativas para acertar a senha,
se ultrapassar esse limite, ele deve ser informado. O usuário também deve ser informado
se ele acertou a senha em até três tentativas.*/

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
        printf("Informe qual será a senha: ");
        fflush(stdin);
        gets(senha);

        do
        {

            printf("Informe a senha para entrar (máximo de 3 tentativas): ");
            gets(tentativa);
            retorno = comparaString(senha, tentativa);
            if(retorno==1)
            {
                cont++;
                if(cont==3)
                {
                    printf("Senha informada está incorreta, limite atingido.\n");
                    printf("Tente novamente mais tarde.\n");
                    retorno=0;
                }
            }
            else
            {
                printf("Senha correta em menos de três tentativas.\nBem vindo(a)");
            }
        }while(retorno==1);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
