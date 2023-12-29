/*4) Fa�a uma fun��o que recebe, por par�metro, um valor inteiro e positivo e retorna a
quantidade de divisores que esse n�mero possui.
a) Usar essa fun��o para mostrar a quantidade de divisores de valores informados pelo usu�rio.
Repetir a leitura enquanto informados valores positivos.
b) Usar essa fun��o para mostrar a quantidade de divisores de um intervalo informado pelo usu�rio.
O intervalo deve ser apresentado em ordem crescente, independentemente da ordem que os valores  forem informados.
c) Usar essa fun��o para verificar e apresentar a maior quantidade de divisores, e o respectivo valor
que a cont�m, de n�meros informados pelo usu�rio. Repetir a leitura enquanto informados valores positivos.*/

#include <stdio.h>
#include <stdlib.h>
#include "qtdedivisores.h"
#include "pauseLimpa.h"

int main(void)
{
    char repetir, opcao, primeiro;
    int num, soma, i,numM, maiorQtde;
    int limiteInf, limiteSup;

    do
    {
        system("cls");
        //
        soma = 0;
            printf("Contador de divisores.\n");
            printf("A - Mostrar quantidade de divisores de valores informados.\n");
            printf("B - Mostar a quantidade de divisores de um intervalo.\n");
            printf("C - Apresentar maior quantidade de divisores.\n");
            printf("Informe a op��o desejada: \n");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {

                    do
                    {
                        soma =1;
                        printf("Informe um valor: ");
                        scanf("%d",&num);
                        if(num>0)
                        {
                            soma = soma + qtdedivisores(num);
                            printf("Quantidade de divisores: %d\n",soma);
                        }
                    }while(num>0);
                    break;
                }
                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe um valor do intervalo: ");
                        scanf("%d",&limiteInf);
                    }while(limiteInf<0);
                    do
                    {
                        printf("Informe outro valor do intervalo: ");
                        scanf("%d",&limiteSup);
                    }while(limiteSup<0);

                    if(limiteSup<limiteInf)
                    {
                        i = limiteInf;
                        limiteInf = limiteSup;
                        limiteSup = i;
                    }

                    for(i=limiteInf;i<=limiteSup;i++)
                    {
                        soma = qtdedivisores(i);
                        printf("%d tem %d divisores.\n",i, soma);
                    }
                    break;
                }
                case 'C':
                case 'c':
                {
                    do
                    {
                        printf("Informe um valor: ");
                        scanf("%d",&num);
                        if(num>0)
                        {
                            soma = qtdedivisores(num);
                            if(primeiro = 'n')
                            {
                                maiorQtde = soma;
                                primeiro ='s';
                                numM = num;
                            }
                            else
                            {
                                if(num>maiorQtde)
                                {
                                    maiorQtde = soma;
                                    numM = num;
                                }
                            }
                        }
                    }while(num>0);
                    printf("%d tem o maior n�mero de divisores %d\n",numM,maiorQtde);
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
