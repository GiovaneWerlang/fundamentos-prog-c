/*6) Elaborar um algoritmo que lê um valor que se refere à altura de uma pessoa e mostra uma
mensagem conforme a tabela a seguir. Utilizar variável do tipo double:
Altura  Informação mostrada
menor que 1,50 “abaixo de um metro e meio”
de 1,50 a 1,80 “entre um metro e meio e um metro e oitenta centímetros”
maior que 1,80 “acima de um metro e oitenta centímetros”*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double altura;

    printf("Informe a altura: ");
    scanf("%lf",&altura);

    if(altura< 1.50)
    {
        printf("abaixo de um metro e meio\n");
    }
    else if(altura >= 1.50 && altura<= 1.80)
    {
        printf("entre um metro e meio e um metro e oitenta centímetros\n");
    }
    else
    {
        printf("acima de um metro e oitenta centímetros\n");
    }

    system("pause");
    return(0);
}
