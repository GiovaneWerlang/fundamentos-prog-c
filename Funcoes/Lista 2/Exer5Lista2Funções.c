/*5) Fazer uma função que mostre os divisores de um número. Essa função recebe como parâmetro o
número e mostra os divisores de 1 até o número passado como parâmetro da função.
a) Usar essa função para mostrar os divisores de valores informados pelo usuário. Validar para que
seja uma entrada positiva.
b) Usar essa função para mostrar os divisores de cada número de um intervalo com os limites
informados pelo usuário. E a função do exercício anterior para apresentar a quantidade de divisores.
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
            printf("B - Mostra os divisores dos números do intervalo e a quantidade.\n");
            printf("Digite a opção desejada:\n");
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
                    printf("Divisores de %d são\t",num);
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
                    printf("Opção inválida, tente novamente.\n");
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
