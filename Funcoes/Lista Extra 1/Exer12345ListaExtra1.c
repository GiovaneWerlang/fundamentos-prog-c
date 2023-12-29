/*5) Escrever um programa que l� um n�mero informado pelo usu�rio, se o n�mero estiver entre 1 e 10
mostrar a sua tabuada; se o n�mero for negativo, transform�-lo em positivo e mostr�-lo;
se o n�mero for positivo e maior que 10, verificar se o mesmo � primo. O programa finaliza quando for informado o valor 0.
Sugest�o: implementar uma fun��o para mostrar a tabuada, outra para apresentar um n�mero em m�dulo,
outra para verificar se um n�mero � primo e uma fun��o que utiliza essas tr�s e que � a chamada na main.*/

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
            printf("C�lculos.\n");
            printf("1 - Soma dos pares entre dois limites de um intervalo.\n");
            printf("2 - Imprime os X n�meros primeiros n�meros m�ltiplos de Y.\n");
            printf("3 - Imprime os valores que s�o simultaneamente m�ltiplos de X e Y no intervalo entre A e B.\n");
            printf("4 - Encontra a hipotenusa de um tri�ngulo ret�ngulo.\n");
            printf("5 - Mostrar tabuada de um n�mero entre 1 e 10 ou primo acima de 10.\n");
            printf("Digite a op��o desejada.\n");
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
                        printf("Soma dos pares entre %d e %d �: %d",limiteInf, limiteSup,retorno);
                        break;
                    }
                    case 2:
                    {
                        do
                        {
                            printf("Informe o n�mero para achar os m�ltiplos: ");
                            scanf("%d",&y);
                        }while(y<=0);
                        do
                        {
                            printf("Informe quantos m�ltiplos devem ser mostrados: ");
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
                            printf("Informe o primeiro m�ltiplo: ");
                            scanf("%d",&x);
                        }while(x<=0);
                        do
                        {
                            printf("Informe o segundo m�ltiplo: ");
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
                            printf("Informe um n�mero: ");
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
                                        printf("%d � primo.\n",x);
                                    }
                                    else
                                    {
                                        printf("%d n�o � primo.\n",x);
                                    }
                                }

                            }
                        }while(x!=0);
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
