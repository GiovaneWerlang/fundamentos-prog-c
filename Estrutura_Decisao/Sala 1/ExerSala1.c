/*1) Elaborar um algoritmo para ler um n�mero que representa uma senha, verificar se a
senha est� correta ou n�o, comparando-a com 12345 e informar "Acesso autorizado" ou "Acesso negado", conforme o caso. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int senha;

    printf("Informe a senha: ");
    scanf("%d",&senha);

    if(senha ==12345)
    {
        printf("Acesso autorizado\n");
    }
    else
    {
        printf("Acesso negado\n");
    }

    system("pause");
    return(0);
}
