/*5) Fazer uma fun��o que mostre os divisores de um n�mero. Essa fun��o recebe como par�metro o
n�mero e mostra os divisores de 1 at� o n�mero passado como par�metro da fun��o.
a) Usar essa fun��o para mostrar os divisores de valores informados pelo usu�rio. Validar para que
seja uma entrada positiva.
b) Usar essa fun��o para mostrar os divisores de cada n�mero de um intervalo com os limites
informados pelo usu�rio. E a fun��o do exerc�cio anterior para apresentar a quantidade de divisores.
Apresentar primeiro os divisores e em seguida (no final da respectiva linha) a quantidade de divisores.
Exemplo:
intervalo entre 5 e 7
5 => 1  5.  Total de divisores: 2
6 => 1  2   3   6.  Total de divisores: 4
7 => 1  7. Total de divisores: 2*/

#include <stdio.h>
#include <stdlib.h>
#include "pauseLimpa.h"
#include "divisores.h"
#include "fatorial.h"

int main(void)
{
    char repetir, opcao;
    int num, retorno, i;
    int limiteInf, limiteSup;

    do
    {
        system("cls");
        //
            printf("Mostrar divisores:\n");
            printf("A - Mostra divisores de valores informados.\n");
            printf("B - Mostra os divisores dos n�meros do intervalo e a quantidade.\n");
            printf("Digite a op��o desejada:\n");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    do
                    {
                        printf("Informe um valor: ");
                        scanf("%d",&num);
                    }while(num<=0);
                    printf("Divisores de %d s�o\t",num);
                    mostradivisor(num);
                    break;
                }
                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe um limite (valor positivo): ");
                        scanf("%d",&limiteInf);
                    }while(limiteInf<=0);

                    do
                    {
                        printf("Informe outro limite (valor positivo): ");
                        scanf("%d",&limiteSup);
                    }while(limiteSup<=0);

                    if(limiteSup<limiteInf)
                    {
                        i = limiteInf;
                        limiteInf = limiteSup;
                        limiteSup = i;
                    }

                    for(i=limiteInf;i<=limiteSup;i++)
                    {
                        printf("%d =>\t",i);
                        mostradivisor(i);
                        retorno = contadivisor(i);
                        printf("%d divisores.\n",retorno);

                    }
                    break;
                }
                default:
                {
                    printf("Op��o inv�lida, tente novamente.\n");
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
