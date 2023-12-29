#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pauseLimpa.h"
#include "qtdeDivisores.h"
#include "somaDivisores.h"
#include "verificaMult.h"

int main(void)
{
    char repetir, opcao;
    int var1, var2, i, j, retorno;

    do
    {
        system("cls");
        //
            printf("Calculo de divisores e m�ltiplos.\n");
            printf("A - Mostra a quantidade de divisores do n�mero informado.\n");
            printf("B - Mostra os primos entre dois limites positivos.\n");
            printf("C - Verifica se o n�mero � perfeito.\n");
            printf("D - Apresenta n n�meros perfeitos.\n");
            printf("E - Verifica entre 10 a 1000 se h� n�meros cuja soma dos divisores\nexceto o pr�prio n�mero � maior que um, mas menor que o n�mero.\n");
            printf("F - Mostra multiplos entre dois limites em formato de tabela.\n");
            printf("Digite a op��o desejada (A/B/C/D/E/F): ");
            fflush(stdin);
            scanf("%c",&opcao);

                switch(opcao)
                {
                    case 'A':
                    case 'a':
                    {
                        do
                        {
                            printf("Informe um n�mero: ");
                            scanf("%d",&var1);
                            if(var1>0)
                            {
                                retorno = qtdeDivisores(var1);

                                if(retorno>1)
                                {
                                    printf("%d\t\t%d possui %d divisores.\n",var1,var1,retorno);
                                }
                                else
                                {
                                    printf("%d\t\t%d possui %d divisor.\n",var1,var1,retorno);
                                }

                            }
                            else
                            {
                                printf("0 possui infinitos divisores.\n");
                            }
                        }while(var1>-1);
                        break;
                    }

                    case 'B':
                    case 'b':
                    {
                        do
                        {
                            printf("Informe um limite: ");
                            scanf("%d",&var1);
                        }while(var1<=0);
                        do
                        {
                            printf("Informe um limite: ");
                            scanf("%d",&var2);
                        }while(var2<=0);
                        if(var2<var1)
                        {
                            retorno = var1;
                            var1 = var2;
                            var2 = retorno;
                        }
                        for(i=var1;i<=var2;i++)
                        {
                            retorno = qtdeDivisores(i);
                            if(retorno<3)
                            {
                                printf("%d\t",i);
                            }
                        }
                        break;
                    }

                    case 'C':
                    case 'c':
                    {
                        do
                        {
                            printf("Informe um n�mero: ");
                            scanf("%d",&var1);
                        }while(var1<=0);
                        retorno = somaDivisores(var1);
                        if(retorno==var1)
                        {
                            printf("%d � um n�mero perfeito.\n",var1);
                        }
                        else
                        {
                            printf("%d n�o � um n�mero perfeito.\n",var1);
                        }
                        break;
                    }

                    case 'D':
                    case 'd':
                    {
                        do
                        {
                            printf("Informe a quantidade de n�meros perfeitos a serem mostrados \n(positivo e menor que 4): ");
                            scanf("%d",&var1);
                        }while(var1<1||var1>3);
                        var2=0;
                        for(i=2;var2<var1;i++)
                        {
                            retorno = somaDivisores(i);
                            if(retorno==i)
                            {
                                printf("%d\t",i);
                                var2++;
                            }
                        }
                        break;
                    }

                    case 'E':
                    case 'e':
                    {
                        for(i=10;i<=1000;i++)
                        {
                            retorno= somaDivisores(i);
                            if(retorno<i&&retorno>1)
                            {
                                printf("%d\t",i);
                            }
                        }
                        break;
                    }

                    case 'F':
                    case 'f':
                    {
                        do
                        {
                            printf("Informe o primeiro limite: ");
                            scanf("%d",&var1);
                        }while(var1<=0);
                        do
                        {
                            printf("Informe o segundo limite (maior que %d e n�o maior que %d): ",var1,var1+10);
                            scanf("%d",&var2);
                        }while(var2<var1||var2>var1+10);
                        for(i=var1;i<=var2;i++)
                        {
                            printf("\t%d",i);
                        }
                        for(i=var1;i<=var2;i++)
                        {
                            printf("\n%d",i);
                            for(j=var1;j<=var2;j++)
                            {
                                retorno = verificaMult(i,j);
                                if(retorno==11||retorno==10||retorno==01)
                                {
                                    printf("\tX");
                                }
                                else
                                {
                                    printf("\t ");
                                }

                            }

                        }
                        break;
                    }

                    default:
                    {
                        printf("Op��o inv�lida, tente novamente.\n");
                        break;
                    }
                }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
