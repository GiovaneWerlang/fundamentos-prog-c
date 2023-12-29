/*5) Escrever um programa que lê um número informado pelo usuário, se o número estiver entre 1 e 10
mostrar a sua tabuada; se o número for negativo, transformá-lo em positivo e mostrá-lo;
se o número for positivo e maior que 10, verificar se o mesmo é primo. O programa finaliza quando for informado o valor 0.
Sugestão: implementar uma função para mostrar a tabuada, outra para apresentar um número em módulo,
outra para verificar se um número é primo e uma função que utiliza essas três e que é a chamada na main.*/

#include <stdio.h>
#include <stdlib.h>
#include "pauseLimpa.h"
#include "soma.h"
#include "mostramultiplos.h"
#include "hipotenusa.h"
#include "funcoesX.h"

int main(void)
{
    char repetir;
    int opcao, limiteInf, limiteSup, retorno;
    int x, y, a ,b, i;
    float hipo;

    do
    {
        system("cls");
        //
            printf("Cálculos.\n");
            printf("1 - Soma dos pares entre dois limites de um intervalo.\n");
            printf("2 - Imprime os X números primeiros números múltiplos de Y.\n");
            printf("3 - Imprime os valores que são simultaneamente múltiplos de X e Y no intervalo entre A e B.\n");
            printf("4 - Encontra a hipotenusa de um triângulo retângulo.\n");
            printf("5 - Mostrar tabuada de um número entre 1 e 10 ou primo acima de 10.\n");
            printf("Digite a opção desejada.\n");
            scanf("%d",&opcao);

                switch(opcao)
                {
                    case 1:
                    {
                        do
                        {
                            printf("Informe um limite: ");
                            scanf("%d",&limiteInf);
                        }while(limiteInf<=0);
                        do
                        {
                            printf("Informe outro limite: ");
                            scanf("%d",&limiteSup);
                        }while(limiteSup<=0);

                        if(limiteSup<limiteInf)
                        {
                            x = limiteInf;
                            limiteInf = limiteSup;
                            limiteSup = x;
                        }
                        retorno = somaPares(limiteInf,limiteSup);
                        printf("Soma dos pares entre %d e %d é: %d",limiteInf, limiteSup,retorno);
                        break;
                    }
                    case 2:
                    {
                        do
                        {
                            printf("Informe o número para achar os múltiplos: ");
                            scanf("%d",&y);
                        }while(y<=0);
                        do
                        {
                            printf("Informe quantos múltiplos devem ser mostrados: ");
                            scanf("%d",&x);
                        }while(x<=0);

                        mostraMultiplos(x,y);



                        break;
                    }
                    case 3:
                    {
                        do
                        {
                            printf("Informe um limite: ");
                            scanf("%d",&limiteInf);
                        }while(limiteInf<=0);
                        do
                        {
                            printf("Informe outro limite: ");
                            scanf("%d",&limiteSup);
                        }while(limiteSup<=0);

                        if(limiteSup<limiteInf)
                        {
                            x = limiteInf;
                            limiteInf = limiteSup;
                            limiteSup = x;
                        }
                        do
                        {
                            printf("Informe o primeiro múltiplo: ");
                            scanf("%d",&x);
                        }while(x<=0);
                        do
                        {
                            printf("Informe o segundo múltiplo: ");
                            scanf("%d",&y);
                        }while(y<=0);

                        mostraMultiploIntervado(x,y,limiteInf,limiteSup);

                        break;
                    }
                    case 4:
                    {

                        interHipo();


                        break;
                    }
                    case 5:
                    {
                        do
                        {
                            printf("Informe um número: ");
                            scanf("%d",&x);
                            if(x!=0)
                            {
                                if(x<0)
                                {
                                    transformaPositivo(x);
                                }
                                else if(x>0&&x<=10)
                                {
                                    tabuada(x);
                                }
                                else
                                {
                                    retorno = verificaPrimo(x);
                                    if(retorno==1)
                                    {
                                        printf("%d é primo.\n",x);
                                    }
                                    else
                                    {
                                        printf("%d não é primo.\n",x);
                                    }
                                }

                            }
                        }while(x!=0);
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
