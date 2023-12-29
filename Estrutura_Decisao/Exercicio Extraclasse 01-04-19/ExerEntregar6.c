/*6) Elaborar um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
infantil A = 5 a 7 anos
infantil B = 8 a 10 anos
juvenil A = 11 a 13 anos
juvenil B = 14 a 17 anos
s�nior = maiores de 17 anos
n�o categorizado como atleta = menor de 5 anos, mas se o valor informado � negativo
informar o usu�rio que o valor � inv�lido para o escopo da solu��o.
Sugest�o: utilizar estruturas ifs encadeadas, por qu�?*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade;

    printf("Informe a idade do nadador: ");
    scanf("%d",&idade);

    if(idade <5)
    {
        if(idade>=0)
        printf("O valor � inv�lido para o escopo da solu��o\n");
        else
        {
            printf("N�o categorizado como atleta\n");
        }
    }
    else if( idade>17)
    {
        printf("Categoria s�nior\n");
    }
    else if( idade>=5 && idade<=7)
    {
        printf("Categoria infantil A\n");
    }
    else if( idade>=8 && idade<=10)
    {
        printf("Categoria infantil B\n");
    }
    else if( idade>=11 && idade<=13)
    {
        printf("Categoria juvenil A\n");
    }
    else if( idade>=14 && idade<=17)
    {
        printf("Categoria juvenil B\n");
    }

    system("pause");
    return(0);
}
